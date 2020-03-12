

<?php 
  require_once('config.inc'); seite(__FILE__);
  require_once('php/ldap.inc');
  require_once('php/mail.inc');    # für prot_mailadr
  require_once('php/tel.inc'); 

?>
<style type="text/css">
.absolventen {
  overflow: auto;
  padding:20px;
  filter: grayscale(100%);
}

.absolventen:hover {
  filter: grayscale(0%);
  background: rgb(246,246,246);
  background: linear-gradient(135deg, rgba(246,246,246,1) 0%, rgba(238,238,238,1) 100%);
  border-right: 20px solid #123375;
  padding-tight:0;
}

.absolventen img {
  height:200px;
  width:300px;
  float:left;
  margin-right:20px;
}
</style>
<?php 

$servername = "mysql.hrz.tu-chemnitz.de";
$username = "MFT_WEBSITE_rw";
$password = "Vu3beeDi8";
$dbname = "MFT_WEBSITE";

try {
    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
    // set the PDO error mode to exception
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    //echo "Connected successfully";

    //$stmt = $conn->prepare("select * from tbl_micromanu");
    
    $user = $conn->query("select * from MFT_WEBSITE.tbl_micromanu m ORDER BY m.dateOfDefence DESC")->fetchAll();
  // and somewhere later:
  

    //echo "<pre>";
    //print_r($user);
    //echo "ok";

 }catch(PDOException $e)
    {
    //echo "Connection failed: " . $e->getMessage();
    }
?>


<?php 
  foreach ($user as $absolvent) {
?>
<div class="absolventen">
     <img alt="" src=<?php echo $absolvent['imagePath']; ?> style="height:220px; width:220px" />
   

      <h2><?php echo $absolvent['title'].' '.$absolvent['firstName'].' '.$absolvent['lastName'].', '.$absolvent['degree']; ?></h2>

<strong>Thema:</strong>
      <p><?php echo $absolvent['topic'] ?></p>

      <p><strong>Verteidigung:</strong> <span><?php echo date_format(date_create($absolvent['dateOfDefence']),"d.m.Y"); ?></span></p>
</div>
  <?php } ?>
    <!-- Absolvent Ende --><!-- Absolvent Anfang -->
