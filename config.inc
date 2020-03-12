<?php 

# Navigations-Leiste oben
  $nav['Fakultät Maschinenbau'] = '/mb';
  $nav['Professur Mikrofertigungstechnik'] = '/mb/MikroFertTech/index.php';


# Spracheinstellungen
  $language = '';
  $lang['de'] = '0';
  $lang['en'] = '1';
  $lang['fr'] = '0';
  $lang['ru'] = '0';
  $lang['cs'] = '0';
  $lang['pl'] = '0';
  $lang['es'] = '0';
  $lang['hu'] = '0';

  $charset = 'utf-8';

# Men&uuml;-Leiste
#0
  $menu[] = array('name' => 'Professur',
                   'url' => '/mb/MikroFertTech/index.php',
                   'level' => '1');
#1
  $menu[] = array('name' => 'Professor',
                   'url' => '/mb/MikroFertTech/professor.php',
                   'level' => '2');
#2
  $menu[] = array('name' => 'Mitarbeiter/-innen',
                   'url' => '/mb/MikroFertTech/mitarbeiter.php',
                   'level' => '2');
#3
  $menu[] = array('name' => 'Organigramm',
                   'url' => '/mb/MikroFertTech/organigramm.php',
                   'level' => '2');
#4
  $menu[] = array('name' => 'SVP',
                   'url' => '/mb/MikroFertTech/svp.php');
#5
  $menu[] = array('name' => 'AVM',
                   'url' => '/mb/MikroFertTech/avm.php');
#6
  $menu[] = array('name' => 'MuB',
                   'url' => '/mb/MikroFertTech/mub.php');
#7
  $menu[] = array('name' => 'Ausstattung',
                   'url' => '/mb/MikroFertTech/ausstattung.php',
                   'level' => '2');
#8
  $menu[] = array('name' => 'Stellenausschreibungen',
                   'url' => '/mb/MikroFertTech/stellenausschreibung_leer.php');
#9
  $menu[] = array('name' => 'Kontakt',
                   'url' => '/mb/MikroFertTech/kontakt.php',
                   'level' => '2');
#10
  $menu[] = array('name' => 'Lehre',
                   'url' => '/mb/MikroFertTech/lehre.php',
                   'level' => '1');
#11
  $menu[] = array('name' => 'Studiengänge',
                   'url' => '/mb/MikroFertTech/studiengaenge.php',
                   'level' => '2');
#12
  $menu[] = array('name' => 'Lehrveranstaltungen',
                   'url' => '/mb/MikroFertTech/lehrveranstaltung.php',
                   'level' => '2');
#13
  $menu[] = array('name' => 'Studentische Arbeiten',
                   'url' => '/mb/MikroFertTech/studienarbeiten.php',
                   'level' => '2');
#14
  $menu[] = array('name' => 'Hilfskräfte',
                   'url' => '/mb/MikroFertTech/hilfskraefte.php',
                   'level' => '2');
#15
  $menu[] = array('name' => 'Angebote für Schüler',
                   'url' => '/mb/MikroFertTech/angebote_schueler.php',
                   'level' => '2');
#16
  $menu[] = array('name' => 'Forschung',
                   'url' => '/mb/MikroFertTech/forschung.php',
                   'level' => '1');
#17
  $menu[] = array('name' => 'Projekte',
                   'url' => '/mb/MikroFertTech/projekte.php',
                   'level' => '2');
#18
  $menu[] = array('name' => 'Veröffentlichungen',
                   'url' => '/mb/MikroFertTech/veroeffentl.php',
                   'level' => '2');
#19
  $menu[] = array('name' => 'Kooperationen',
                   'url' => '/mb/MikroFertTech/kooperation.php',
                   'level' => '2');
#20
  $menu[] = array('name' => 'Veranstaltungen',
                   'url' => '/mb/MikroFertTech/veranstaltungen.php',
                   'level' => '1');
#21
  $menu[] = array('name' => 'Habilitationskolloquien',
                   'url' => '/mb/MikroFertTech/habilitationen.php',
                   'level' => '2');
#22
  $menu[] = array('name' => 'Promovendenseminare',
                   'url' => '/mb/MikroFertTech/promovendenseminar.php',
                   'level' => '2');
#23
  $menu[] = array('name' => 'Promotionskolloquien',
                   'url' => '/mb/MikroFertTech/promotionen.php',
                   'level' => '2');
#24
  $menu[] = array('name' => 'Absolventenkolloquien',
                   'url' => '/mb/MikroFertTech/absolventen.php',
                   'level' => '2');
#25
  $menu[] = array('name' => 'INSECT',
                   'url' => '/mb/MikroFertTech/insect.php',
                   'level' => '2');
#26
  $menu[] = array('name' => 'Kompezentzentrum KoMOT',
                   'level' => '1');
#27
  $menu[] = array('name' => 'Mission',
                   'level' => '2');
#28
  $menu[] = array('name' => 'Infothek',
                   'level' => '2');

#0
  $verweise[] = array('name' => 'Masterstudiengang Production Management',
                   'url' => 'http://www.tuced.de/masterstudiengaenge/production-management/ueberblick.html',
                   'info' => 'Externer Link');
#1
  $verweise[] = array('name' => 'Akademie für Wissenstransfer',
                   'url' => 'https://www.tu-chemnitz.de/afw/',
                   'info' => 'Externer Link');


# Autor
  $autor = 'MFT';
  $email = 'mft@tu-chemnitz.de';

# Seitenkopf
  $haupttitel = 'Professur Mikrofertigungstechnik';

# Seitenfu&szlig;

  $organisation = 'TU Chemnitz, Fakultät Maschinenbau, Professur Mikrofertigungstechnik';

# Verlinkung
  $keywords = 'Mikrofertigungstechnik, Mikrofertigung, Mikroumformtechnik, Mikroumformen, Betriebsmittel, Abtragende Verfahren, Mikrostrukturtechnik, Spanende Verfahren, Prozessgestaltung  ';

# Weitere Einstellungen
  $javascript = array("jquery-ui");

  #### NICHT Ãndern:
  $basedir = dirname(__FILE__);
  require_once('tuc4.inc');
?>
