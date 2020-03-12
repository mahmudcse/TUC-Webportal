<?php 
  require_once('config.inc'); seite(__FILE__);
  require_once('php/ldap.inc');
  require_once('php/mail.inc');    # für prot_mailadr
  require_once('php/tel.inc'); 
 ?> 
<div class="col-xs-12 tucal-canvas" id="top">
        <div class="row">
          <main class="col-xs-12 page-content">
<h1>Mitarbeiter/-innen&nbsp;der Professur Mechatronik</h1>

<div>&nbsp;</div>

<table border="0" bordercolordark="000000" bordercolorlight="000000" cellpadding="0" cellspacing="0" style="width:100%">
  <tbody>
<p> 
  <?php  
    $infos = ldap_info('ouNumber=231534');


    $mitarbeiter_array = [''];
    $ohne_array = [''];
//enar, mhac, ngul


      foreach($mitarbeiter_array as $mitarbeiter)
      {
        if(!in_array($mitarbeiter, array_column($infos, 'login')))
        {
          $name = ldap_userinfo($mitarbeiter);
          if(sizeof($name) && $name['name']){
            array_push($infos, $name);
          }
        }
      }

      //asort($infos);
array_multisort(array_column($infos, 'nachname'), SORT_ASC, $infos);



  ?>
</p>
  <?php 
      foreach ($infos as $info) {
        if(in_array($info['login'], $ohne_array)){
          continue;
        }
        
    ?>

 
    <tr>
      <td align="center" height="150" rowspan="2" width="151">
      <div><img alt="" src=<?php echo 'Bilder/'.$info['nachname'].'.jpg'; ?> height="200" width="300"/></div>
      </td>
      <td width="20">
      <div>&nbsp;</div>
      </td>
      <td colspan="2" height="30" style="vertical-align:middle">
      <div><strong><?php echo $info['name']; ?></strong></div>
      </td>
    </tr>
    <tr>
      <td width="20">
      <div>&nbsp;</div>
      </td>
      <td style="vertical-align:top">
      <div>Phone: <?php echo telnu($info['tel']); ?><br />
        Fax:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
        <?php 
          $fax = $info['fax']; 
          echo prot_mailadr("$fax", 11);
        ?>
        <br />
        E-Mail: <a data-height="157" data-title="Spam proof e-mail address protection" data-remote-frame="/urz/mail/adrx.html.en?1-ZW5kYWxrYWNoZXctbWVrb25uZW4uYXJhZ2F3QHMyMDE3Lg==" href="/urz/mail/adr.php?1-ZW5kYWxrYWNoZXctbWVrb25uZW4uYXJhZ2F3QHMyMDE3Lg==" data-target="#hs-modal" data-toggle="modal" rel="nofollow">
          <?php 
            //echo $info['mail'];
            $mail = $info['mail'];
            echo prot_mailadr("$mail");
            echo prot_mailadr("$mail", 1);
          ?>
            
          </a><br />
        Room: 
        <?php 
            if(strlen($info["raum"]) > 0){
              $room = $info["raum"];
            }else{
              $room = 'FhG/IWU';
            }
            echo $room;
            
        ?>
      </div>
      </td>
    </tr>
    <tr>
      <td align="center" colspan="3" height="10">
      <div>
      <hr /></div>
      </td>
    </tr>
  <?php   } ?>
    </tbody>
  </table>




