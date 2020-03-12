#include <stdio.h>
#include <stdlib.h>

char name[100],password[5];
int trade,sell,wonmv,gn,bi,di,bid2,bid3,bid4,bi2,bi3,di2,di3,swd,trade2,pnt,dfns,s,escape,hlth=0;taka=0,water,obstruct,breaker,dimension,door,deal,land,life,myhlth=70,choice,goon2,goon3,goon4,bid,cop,op,money=0,opphlth,markmv,blindmv;grenade=0,gun=20,wumv,bazooka=0,sword=30,defense=15,xls=0,smkgrnd,confirm,mymove,i;

int main()
{


    jail:

    printf("-----------------Mission Combat----------------\n");
    printf("Name:");
    scanf("%s",&name);
    printf("Soldier %s,you have been given a mission.To retrieve a secret scroll from the enemy.",name);
        printf("\nYou have left at dawn for Inokiwa Mountains.");
        getchar();
        printf("\nYou have:\n1.M416 gun-20shtpwr\n2.Highest class sword named Galicura-30dmgpwr\n3.Bazooka-High pwr blaster-80shtpwr\n4.Defensive suit-15 dmgresist.");
        getchar();
        printf("\nBut on the way you are blocked by some bandits on the mountain!Fight them!");
        getchar();
        opphlth=myhlth+30;
        printf("\nYour health=%d   Opponent's health=%d",myhlth,opphlth);
        while(opphlth>=0 || myhlth>=0){
        printf("\nChoose your moves!\nAttack:\n1.Gun\n2.Sword\n4.Defense\nYour move:");
        scanf("%d",&mymove);
        op=rendNum(5);
        switch(mymove){
      case 1:
          if(op==4){
            opphlth=opphlth-(gun-defense);
            printf("\nYou shot your opponent with a gun.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
        opphlth=opphlth-gun;
        printf("\nYou shot your opponent with a gun.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
          break;
          }


      case 2:
        if(op==4){
           opphlth=opphlth-(sword-defense);
            printf("\nYou have attacked with a sword.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
        }
        else{
        opphlth=opphlth-sword;
        printf("\nYou have attacked with a sword.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
        }
        break;

      case 4:
        myhlth=myhlth+defense;
        printf("You have defended! Your opponent's health=%d   Your health=%d",opphlth,myhlth);
        break;

    }

switch(op){
      case 1:
          if(mymove==4){
            myhlth=myhlth-(gun-defense);
             printf("\nYour opponent shot you with a gun.\nOpponent health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
        myhlth=myhlth-gun;
        printf("\nYour opponent shot you with a gun.\nOpponent health=%d   Your health=%d",opphlth,myhlth);
          }
        break;

      case 2:
        if(mymove==4){
           myhlth=myhlth-(sword-defense);
           printf("\nYou opponent attacked with a sword.Opponent health=%d   Your health=%d",opphlth,myhlth);
        }
        else{
        myhlth=myhlth-sword;
        printf("\nYou opponent attacked with a sword.Opponent health=%d   Your health=%d",opphlth,myhlth);
        }
        break;


      case 3:
        opphlth=opphlth+defense;
        printf("\nYour opponent deflected!Opponent health=%d   Your health=%d",opphlth,myhlth);
        break;

    }
    if(opphlth < 0 || myhlth <0)
        break;
    }


    if(opphlth<=0){
       taka++;
       hlth++;
        printf("\n\nCONGRATS! YOU HAVE DEFEATED THE BANDITS!\n");
        getchar();
        printf("\nYou have earned $300 from the bandits.\nYou can use this money in the market to improvise your attacking/defensive power\n   or \nSell them to earn more.\nYou can now move on!");
    }
    else{
        printf("\nSorry you have been killed. Start the game again.");
        reset();
        goto jail;
    }

    getchar();

    reset();
    retask();
    again:
    printf("\nYou have arrived at the Kunoichi market.");
    getchar();
    printf("\nYou have to gain access to the info. of the secret scrolls whereabouts from an auctioned good in the underground dark auction.");
    getchar();
    printf("\nFind it:\n1.The armory stall(offers upgrades to weaponry)\n2.A sleeping person under a tree\n3.Call assistant\n4.The carpet stall\n5.The bar\n   Your move:");
    scanf("%d",&markmv);
    switch(markmv){
case 1:
    go:
    printf("\nMarketor:Sorry we don't provide info.But we can show you our armory.");
    getchar();
    printf("\n1.Gun=+45shtpwr($75)\n2.Sword=+75strkpwr($110)\n3.(new)Bazooka=+130htpwr($245)\n4.Defense=+35htpt($50)\n5.(new)grenade=+65splshboom($120)\n6.Exit\n  Your money balance=$%d\n    Your move:",money);
    scanf("%d",&trade);

    if(trade==1){
        if(money>75){
        gun=gun+45;
        money=money-75;
        printf("\nYour gun's shtpwr has been increased to %dshtpwr",gun);
        goto go;
        }
        else{
            printf("\nSorry,not enough money");
        goto go;
        }

    }
    else if(trade==2){

       if(money>110){
        sword=sword+75;
        money=money-110;
         printf("\nYour Galicura's htpwr has been increased to %ddmgpwr",sword);
        goto go;
        }
        else{
            printf("\nSorry,not enough money");
        goto go;
        }
    }
    else if(trade==3){
        if(money>245){
        bazooka=bazooka+130;
        money=money-245;
         printf("\nYou have unlocked bazooka with %dshtpwr",bazooka);
        goto go;
        }
        else{
            printf("\nSorry,not enough money");
        goto go;
        }
    }
    else if(trade==4){

       if(money>50){
        defense=defense+35;
        money=money-50;
         printf("\nYour defensive suit's dmgresist has been increased to %ddmgresist",defense);
        goto go;
        }
        else{
            printf("\nSorry,not enough money");
        goto go;
        }
    }

    else if(trade==5){
        if (money>120){
            grenade=grenade+65;
            money=money-120;
             printf("\nYou have unlocked grenade with %dsplspwr",grenade);
            goto go;
        }
        else{
        printf("\nSorry,not enough money");
        goto go;
        }
    }


     else{
     printf("\nThank you for buying!COME AGAIN!");
     printf("\nYour money balance=$%d",money);
     }
     goto again;

    break;


case 2:
    printf("\nSleeping man:EH! Who goeth there!");
    getchar();
    printf("\n%s:Who are you?\nSleeping man:I am a traveller from the fast east.I SEE ALL I KNOW ALL!",name);
    getchar();
    printf("\n%s:Can you tell me then how to get to the underground dark auction?",name);
    getchar();
    printf("\nSleeping man:THE WHAT-A-WHAT NOW?If I don't know it it is, there is no such thing!I KNOW ALL I SEE ALL!");
   goto again;
   break;

case 3:
    assist();
    goto again;
    break;
case 4:
    printf("\nMarketor:WHAT!THERE IS SUCH THING!I am reporting it to deputy Al Kharaq!");
    goto again;
    break;

case 5:
    star:
        getchar();
    printf("\nYou have entered the bar.\nIt is almost empty except some regular drunkard.");
    getchar();
    printf("\nYou go to the bartender and ask for the info.\n%s:Have you heard of the underground dark auction?\nBartender whispers:Banana.");
    getchar();
    printf("\nIt is a random word chain passcode!The man from beside calls you.");
    getchar();
    printf("\nRandom person:I'll give you some hints.\n1.It is a Bengali term.\n2.Related to the word itself.\n3.Rhymes with gola.");
    getchar();
    printf("\nWhat do you think the password is?:",name);
    scanf("%s",password);
    if(strcmp(password,"kola")==0){
    printf("Bartender:Follow me.\nCongrats %s!You got the password right!Now the bartender is leading towards a path to the underground dark auction.",name);
    }
    else{
        printf("\nWhat may I serve you?\nSorry %s,your answer is wrong try again.",name);
        goto star;
    }
    break;
    }
 getchar();
printf("\nThe bartender has lead you through a the back corridor to the back of a staircase.There is a biometric scan.");
getchar();
printf("\nThe bartender says:Place your finger.\nOH NO! Seems like you don't have a identity for the auction!");
getchar();
printf("\nYou have 2 options:\n1.kill him and gain his biometrics with glue\n2.bribe the keeper/bartender\nYour move:");
scanf("%d",&choice);
switch(choice){
 case 1:
     printf("\nYou try to thrust the bartender with a sword,but he deflects and backthrusts it against you!\nBartender:I have been in the hardest training by the greatest judo master.YOU SHOULD HAVE KNOWN BETTER!\nYou have died!Go to the last checkpoint.");
     goto star;
     break;

 case 2:
    printf("\nThe bartender/keeper has accepted the bribe!");
    getchar();
    printf("\nHe took you to his office and gave you a fake ID.");
    getchar();
    printf("\nGreat!You have gained access to to the underground dark auction!");
    taka++;
    retask();
    getchar();
    printf("\nGreat!You have earned more $365 for your communicating skills.\nYour money balance=$%d.\nNow continue on your journey!",money);
    break;
}
chhaka:
    getchar();
  printf("\nYou have entered the dark auction.There is a lot of shady people and some even famous goons of mafias!You need to be on your toes!");
  getchar();
  printf("\nOH!The auction is starting!Get info. on the auction.");
  getchar();
  printf("\nHost:Ladies and gentlemen,WELCOME!");
  getchar();
  printf("\nThis dark auction from Windonswo mafia the host!He welcomes you all.");
  getchar();
  printf("\nWe have been united in the mafia terrorism world and will dominate it!.");
  getchar();
  printf("\nBut money is power!So,lets auction!");
  getchar();
  printf("\nFirst, the brain of Stalin. Starting bid $560.(people start to bid)");
  getchar();
  printf("\nThis is not what we need.");
  getchar();
  printf("\nNext!The documents of  WW2 treaty.Starting bid $890.(people start to bid)");
  getchar();
  printf("\nThis is not what we need.");
  getchar();
  printf("\nThe one and only,the BEST in Windonswo's stock! The scroll of Nwaq-don-Swon scroll of Rutasaki village's map!");
  getchar();
  printf("\nIt shows all details of the village.Starting bid $1190.");
  getchar();
  printf("\nOH NO!Looks like the scroll that we are suppose to steal is an auctioned item!");
  getchar();
  printf("\nYou have options:\n1.Go for the steal.\n2.Start bidding\nYour move:");
  scanf("%d",&confirm);
  switch(confirm){
  case 1:
      printf("\nAfter bidding ends,you go to steal the scroll from the warehouse.");
      getchar();
      printf("\nBut when you go and open the crate you see there is nothing there!");
      getchar();
          printf("\nOH NO!Looks like you have been deceived!");
          getchar();
          printf("\nThe armored guards shoot you to death start from the last checkpoint.");
      goto chhaka;

  case 2:
    printf("\nBidding has started!.\nOne of the goons bid $760.\nWhat is your price?(money balance=%d):",money);
    scanf("%d",&bid);
    bi=bid+1;
    di=bid+280;
    goon2=rendR(bi,di);
    printf("\nAnother goon has bid $%d\nBid HIGHER!:",goon2);
    scanf("%d",&bid2);
     bi2=bid2+1;
    di2=bid2+280;
    goon3=rendR(bi2,di2);
    printf("\nOH NO!Yet another goon has bid higher($%d)\nBid HIGHER!:",goon3);
    scanf("%d",&bid3);
     bi3=bid3+1;
    di3=bid3+280;
    goon4=rendR(bi3,di3);
    printf("\nYES!All the goons have quit bidding!But the another goon has placed his last bid:$%d\nBid a BIT HIGHER:",goon4);
    scanf("%d",&bid4);
    if(bid>di3){
        printf("\nSorry,you lost the bid!Go to the last checkpoint");
    goto chhaka;
    }
    else{
    printf("\nYES!You have won the bid!Now the Nwaq-don-Swon scroll is your! Go to the storage unit to get it!\n ");
    }
    break;
  }
  getchar();
 printf("\nYou have come to the storage unit.");
 getchar();
 printf("\nBut it seems like you don't have the money!\nThe people guarding the auctioned goods have called backup!");
 getchar();
 printf("\nBut this time they are trained guards!Fight them carefully!");
 getchar();
opphlth=myhlth+75;
        printf("\nYour health=%d    Opponent's health=%d",myhlth,opphlth);
        while(opphlth>=0 || myhlth>=0){
        printf("\nChoose your moves!\nAttack:\n1.Gun\n2.Sword\n3.Bazooka;only usable after 3 attacks\n4.Defense\n5.Grenade is only usable for long range attacks\nYour move:");
        scanf("%d",&mymove);
        op=rendNum(5);
        switch(mymove){
      case 1:
          if(gun>0){
          if(op==4){
            opphlth=opphlth-(gun-defense);
            printf("\nYou shot your opponent with a gun.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
        opphlth=opphlth-gun;
        printf("\nYou shot your opponent with a gun.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          }
          else{
            printf("\nSorry you have sold this item");
          }
          break;

      case 2:
          if(sword>0){
        if(op==4){
           opphlth=opphlth-(sword-defense);
            printf("\nYou have attacked with a sword.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
        }
        else{
        opphlth=opphlth-sword;
        printf("\nYou have attacked with a sword.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
        }
          }
          else{
            printf("\nSorry you have sold this item");
          }
        break;

      case 3:
          if(bazooka>0){
          if (mymove<3){
            printf("\nSorry your bazooka is not yet loaded. Your opponent has been allowed to attack.");
          }
          else{
          opphlth=opphlth-bazooka;
            printf("\nYou have attacked with the mighty bazooka.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          }
          else{
            printf("\nSorry you have sold this item");
          }
          break;

      case 4:
          if(defense>0){
        myhlth=myhlth+defense;
        printf("\nYou have defended! Your opponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
            printf("\nSorry you have sold this item");
          }
         break;
        }



switch(op){
      case 1:
          if(mymove==4){
            myhlth=myhlth-(gun-defense);
             printf("\nYour opponent shot you with a gun.\nOpponent health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
        myhlth=myhlth-gun;
        printf("\nYour opponent shot you with a gun.\nOpponent health=%d   Your health=%d",opphlth,myhlth);
          }
        break;

      case 2:
        if(mymove==4){
           myhlth=myhlth-(sword-defense);
           printf("\nYou opponent attacked with a sword.Opponent health=%d   Your health=%d",opphlth,myhlth);
        }
        else{
        myhlth=myhlth-sword;
        printf("\nYou opponent attacked with a sword.Opponent health=%d   Your health=%d",opphlth,myhlth);
        }
        break;


      case 3:
        opphlth=opphlth+defense;
        printf("\nYour opponent deflected!Opponent health=%d   Your health=%d",opphlth,myhlth);
        break;

    }
    if(opphlth < 0 || myhlth <0)
        break;
    }
    if(myhlth<=0){
        printf("\nSorry,you have been killed.Go back to last checkpoint.");
        reset();
        goto chhaka;
    }
    else{
            taka++;
            hlth++;
        printf("\nCongrats!You have successfully tackled the enemies and have gained more $523!",name);
    }
    retask();
    reset();
    printf("\nBut the auction managers are moving the items!");
    getchar();
    printf("\nMore guards are coming!\nFall back soldier %s,Fall back!",name);
    getchar();
  printf("\nSoldier %s,you have lost the scroll.But all hope is not lost!",name);
  getchar();
  printf("\nAccording to the transport route,the caravan will stop at Wandong market!\nYour next move will be to go there!");
 getchar();
 sharingan:
 printf("\nYou have reached Wandong market.It is crowded with many people;some even dangerous!\n1.There is a big shop with large scale weaponry\n2.A pub which is awfully noisy and crowdy\n3.Call assistant\n4.The caravan\n  What is your move?:");
 scanf("%d",&wonmv);
 switch(wonmv){
 case 1:
     rinnegan:
     printf("\nMarketor:WELCOME stranger!We have:\n1.Gun=+97shtpwr($236)\n2.Sword+145dmgpwr($370)\n3.Bazooka=+350shtpwr($670)\n4.Defensive suit=+75dmgresist($145)\n5.Grenade=+85splsboom($150)\n6.(new)Smoke grenade=gives you no damage($300)\n7.Sell item\nYour balance($%d)\nYour deal:",money);
     scanf("%d",&trade2);
     if(trade2==1){
        if(money<236){
            gun=gun+97;
            money=money-236;
            printf("\nYour gun has been upgraded to %dshtpwr",gun);
            goto rinnegan;
        }
        else{
            printf("\nSorry you don't have enough money.");
            goto rinnegan;
        }
     }

     else if(trade2==2){

       if(money>370){
        sword=sword+145;
        money=money-370;
         printf("\nYour Galicura's htpwr has been upgraded to %ddmgpwr",sword);
        goto rinnegan;
        }
        else{
            printf("\nSorry,not enough money");
        goto rinnegan;
        }
    }
    else if(trade2==3){
        if(money>670){
        bazooka=bazooka+350;
        money=money-670;
         printf("\nYour bazooka's shtpwr has been upgrade to %dshtpwr",bazooka);
        goto rinnegan;
        }
        else{
            printf("\nSorry,not enough money");
        goto go;
        }
    }
    else if(trade2==4){

       if(money>145){
        defense=defense+75;
        money=money-145;
         printf("\nYour defensive suit's dmgresist has been upgraded to %ddmgresist",defense);
        goto go;
        }
        else{
            printf("\nSorry,not enough money");
        goto go;
        }
    }

    else if(trade2==5){
        if (money>150){
            grenade=grenade+85;
            money=money-150;
             printf("\nYour grenade's spsboom has been upgraded to %dsplsboom",defense);
            goto go;
        }
        else{
        printf("\nSorry,not enough money");
        goto go;
        }
    }

     else if(trade2==6){
        if (money>300){
            smkgrnd++;
            money=money-300;
             printf("\nYou have unlocked smoke grenade",grenade);
            goto go;
        }
        else{
        printf("\nSorry,not enough money");
        goto go;
        }
    }
    else if(trade2==7){
    printf("\nWhich weapon do you wanna sell?");
    scanf("%d",&sell);
    if(sell==1){
        gun=0;
        money=money+312;
        printf("\nYou have sold your M416 and earned $312");
        goto rinnegan;
    }
    else if(sell==2){
        sword=0;
        money=money+423;
        printf("\nYou have sold your Galicura and earned $423");
        goto rinnegan;
    }
    else if(sell==3){
        bazooka=0;
        money=money+575;
        printf("\nYou have sold your bazooka and earned $500");
        goto rinnegan;
    }
    else if(sell==4){
        defense=0;
        money=money+180;
        printf("\nYou have sold your defensive suit and earned $180");
        goto rinnegan;
    }
    else if(sell==5){
        defense=0;
        money=money+200;
        printf("\nYou have sold your grenade and earned $200");
        goto rinnegan;
    }
    }
     else{
     printf("\nThank you for buying!COME AGAIN!");
     printf("\nYour money balance=$%d",money);
     }
     printf("\nThank you for buying!COME AGAIN!");
     printf("\nYour money balance=$%d",money);
     goto sharingan;
    break;

 case 2:
     printf("\nYou have entered the pub.OH NO!Looks like the transporters of the auction have stopped here!The people haave caused a chaos!Get out!");
     goto sharingan;
     break;

 case 3:
    assist();
    goto sharingan;
    break;

 case 4:
    printf("\nYou sneak up and see that there are transporters in the caravan!Looks like you have to create a distraction!");
    break;
 }
printf("\nYou have created a distraction with your grenade!There is now mass confusion and you go to steal the scroll of Nwaq-don-Swon.\n You see the scroll but one of the guards shot withg a gun and distracted you!\n The caravan is getting away!");
printf("\nYou have followed the caravan. In order to stop the crate you have create obstructions.\n1.Throw a grenade\n2.Fire a shot at the tire\nYour move:");
scanf("%d",&obstruct);
if(obstruct==1){
    printf("\nYou throw a grenade.It explodes!The whole caravan is burning up and the guards have come out to fight!");
    opphlth=myhlth+500;
        printf("\nYour health=%d   Opponent's health=%d",myhlth,opphlth);
        while(opphlth>=0 || myhlth>=0){
        printf("\nChoose your moves!\nAttack:\n1.Gun\n2.Sword\n3.Bazooka;only usable after 3 attacks\n4.Defense\n5.Grenade\n6.Smoke grenade\nYour move:");
        scanf("%d",&mymove);
        op=rendNum(6);
        switch(mymove){
      case 1:
          if(op==4){
                if(gun>0){
            opphlth=opphlth-(gun-defense);
            printf("\nYou shot your opponent with a gun.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
        opphlth=opphlth-gun;
        printf("\nYou shot your opponent with a gun.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          }
          else{
            printf("\nSorry you have sold this item");
          }
          break;

      case 2:
          if(sword>0){
        if(op==4){
           opphlth=opphlth-(sword-defense);
            printf("\nYou have attacked with a sword.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
        }
        else{
        opphlth=opphlth-sword;
        printf("\nYou have attacked with a sword.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
        }
          }
          else{
            printf("\nSorry you have sold this item");
          }
        break;

      case 3:
          if(bazooka>0){
          if (mymove>3){
              opphlth=opphlth-bazooka;
            printf("\nYou have attacked with the mighty bazooka.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
          printf("\nSorry your bazooka is not yet loaded. Your opponent has been allowed to attack.");
          }
          }
          else{
            printf("\nSorry you have sold this item");
          }
          break;

      case 4:
          if(defense>0){
        myhlth=myhlth+defense;
        printf("You have defended! Your opponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
            printf("\nSorry you have sold this item");
          }
        break;

      case 5:
          if(grenade>0){
         opphlth=opphlth-grenade;
            printf("\nYou have attacked with grenade.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
            printf("\nSorry you have sold this item");
          }
          break;

      case 6:
          op=0;
        printf("\nYou have blinded the opponent.Now what do you want to attack him with?\n1.Gun\n2.Sword\n5.Grenade\nYour move:");
        scanf("%d",&blindmv);
        if(blindmv==1){
            printf("\nYou shot your opponent with a gun.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
        }
        else if(blindmv=2){
            printf("\nYou thrust your opponent with a sword.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
        }
        else{
            printf("\nYou have bombed your opponent with a gun.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
        }
        break;
    }

switch(op){
      case 1:
          if(mymove==4){
            myhlth=myhlth-(gun-defense);
             printf("\nYour opponent shot you with a gun.\nOpponent health=%d   Your health=%d",opphlth,myhlth);
          }
          else{
        myhlth=myhlth-gun;
        printf("\nYour opponent shot you with a gun.\nOpponent health=%d   Your health=%d",opphlth,myhlth);
          }
        break;

      case 2:
        if(mymove==4){
           myhlth=myhlth-(sword-defense);
           printf("\nYou opponent attacked with a sword.Opponent health=%d   Your health=%d",opphlth,myhlth);
        }
        else{
        myhlth=myhlth-sword;
        printf("\nYou opponent attacked with a sword.Opponent health=%d   Your health=%d",opphlth,myhlth);
        }
        break;


      case 3:
        opphlth=opphlth+defense;
        printf("\nYour opponent deflected!Opponent health=%d   Your health=%d",opphlth,myhlth);
        break;

      case 4:
        myhlth=myhlth-grenade;
        printf("\nYour opponent has bombed you with a grenade.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
        break;
    }
    if(opphlth < 0 || myhlth <0)
        break;
    }
printf("\nYour opponent has attacked you and you are down!\nBut instead of finishing it,tey run off.");
}
else{
    printf("\nYou have shot the tire and the tire explodes!But the guards keep their reigns steady and are speeding up!");
    getchar();
    printf("\nYou have a last chance!Quick do something!SHOOT!");
    getchar();
    printf("\nYou shot but missed!The caravan has escaped!");
}
hlth++;
taka++;
reset();
retask();
printf("\nYou missed them!Now all that we know is that they are enroute to their original owner.");
getchar();
printf("\nNow we need info!\nThe nearest known source is your old friend Gordel,who is currently in Wunhan city.GO!");
printf("\nYou have reached Wunhan city.WHAT!It is deserted there is no one here!");
getchar();
printf("\nYou go to the village townhall and see that there is a virus called Corona virus.It is very lethal.");
getchar();
printf("\nBut a group has been producing a cure but it does not seem to have any effect as people are dying of it.");
getchar();
printf("\nNow you have to investigate the source!\n1.Call assistant\n2.Do nothing and fail the mission!");
scanf("%d",&wumv);
switch(wumv){
case 1:
    s = assist();
    break;

case 2:
    printf("\nYou have aborted the mission!\nNow,you are a disgrace to your village and there is war in your village!YOU FAILED!");
    goto jail;
}
  if(s==1){
    printf("\nAccording to your assistant,you the base info. seems like the town hall!GO!");
    getchar();
    printf("\nDo you want to ask 1.good/2.bad?");
    scanf("%d",&cop);
    switch(cop){
case 1:
    printf("\nOfficer:Who are you!\n%s:I am nobody!Now answer my questions or YOU DIE!(you bring out your sword)",name);
    getchar();
    printf("\nOfficer:ALL RIGHT! ALL RIGHT!\n%s:Watch the TONE!",name);
    getchar();
    printf("\nOfficer:Your question please?\n%s:When and how did this virus spread?!",name);
    getchar();
    printf("\nOfficer:One day,a group of bandits wanted to own this town,but we fled them away.\nBut they had threatened to release a biological plague but we did not listen!\nAnd now we suffer what we have named Corona.");
    getchar();
    printf("\n%s:Who was the late mayor?\nOfficer:Mayor Coronaski",name);
    getchar();
    printf("\n%s:What happened to him?\nOfficer:He was killed by the same bandits who threatened us!",name);
    getchar();
    printf("\nThey are now ruling the city,and providing the hopeless cure,which lets us survive a few days at least!");
    getchar();
    printf("\n%s:OH WELL THANK YOU!(you thrust the sword and break the table)",name);
    break;

case 2:
     printf("\nOfficer:Who are you!\n%s:I cannot give you my identity.Could please answer my questions?",name);
     getchar();
     printf("\nOfficer:Your question please?\n%s:When and how did this virus spread?",name);
     getchar();
     printf("\nOfficer:One day,a group of bandits wanted to own this town,but we fled them away.\nBut they had threatened to release a biological plague but we did not listen!\nAnd now we suffer what we have named Corona.");
     getchar();
     printf("\n%s:Who was the late mayor?\nOfficer:Mayor Coronaski",name);
     getchar();
     printf("\n%s:What happened to him?\nOfficer:He was killed by the same bandits who threatened us!",name);
     getchar();
     printf("\nThey are now ruling the city,and providing the hopeless cure,which lets us survive a few days at least!");
     getchar();
     printf("\n%s:THANK YOU!",name);
     break;
    }

    printf("\nThe cure provider seems suspicious,interview them!");
  }

  else{
    printf("\nAccording to your assistant,the cure provider seems suspicious,interview them!");
  }

getchar();
printf("\nYou got to the town hall under a fake news company named Hotscars.They invite you in");
getchar();
printf("\n%s:Hello!We are from...\nLeader:Yah yah I know!My name's Kaziku Jaques!",name);
getchar();
printf("\n%s:Hello,we have some question about your miraculous cure,I hope you can answer us.\nKaziku:Yah sure go ahead!",name);
getchar();
printf("\n%s:Um...how did you come up with the cure?",name);
getchar();
printf("\nKaziku:(hesitantly)Uhh...We used um,sulphu...no nitric acid to um...sodium...\nand used...\n%s:I mean how did you come up with the idea?",name);
getchar();
printf("\nKakizu:OH!um...one day we came and saw this city suffering an unknown plague and wanted to um...help.");
getchar();
printf("\n%s:I heard that you were a group of local bandits...\nKakizu:Those were nothing but our old ways of earning money for a lab!",name);
getchar();
    printf("\n%s:Well,I heard you had killed the mayor?Why?",name);
    getchar();
    printf("\nKakizu:OH!He was not coop...erating to us about the plague,and when we were researching we found out he was infected.\nWhen we publicly introduced this fact,he was unanimously killed.");
    getchar();
    printf("\n%s:Did you make the cure.\nKakizu:No,my friend Gordel did!",name);
    getchar();
    printf("\n%s:Well,thank you for your time!",name);
getchar();
taka++;
retask();
printf("\nYou have earned money for your inspecting qualities!You balance:$%d",money);
getchar();
printf("\nKakizu seemed pretty scared and shaky with the info!\nBut how come Gordel is working for him?");
getchar();
printf("\nYou need to get in contact with Gordel");
getchar();
printf("\nYou call Gordel but he isn't picking up his phone!So you go to the town hall for directions to his home.");
getchar();
printf("\nYou have researched and found out that he lives in Guwahan Street.Go there!");
getchar();
printf("\nYou enter his home,but it seems like a tornado has gone through!Everything is scattered and broken!");
getchar();
printf("\nGordel was always a clean freak!He would never let this state even happen!");
getchar();
printf("\nYou call for him but he does not respond.\nYour deductive mind tells you that he has been kidnapped!");
getchar();
printf("\nYou go further inside for clues.You see everything scattered and broken and a fallen down isle of books.");
getchar();
printf("\nYou lift it to discover smothered grease of machine and a cut wire.So you followed it.");
getchar();
printf("\nIt leads to the main circuit of the house.You go there and examine the broken board.");
getchar();
printf("\nBut you see an extra switch on the center and turn it on.There are sounds of gears moving and a doorway opens!");
getchar();
taka++;
retask();
printf("\nYour money has has increased for your inspection skills!.Your money balance:$%d",money);
getchar();
printf("\nYou enter to see a long dark hallway.Suddenly you feel dizzy.\nOH NO!It seems like Gordel used the heat compressor to release heat currents.You have gotten a mild stroke your health has been decreased by 45!");
myhlth=myhlth-45;
getchar();
printf("\nBut what is here he needs to hide?");
getchar();
ass:
printf("\nYou finally get to the end of the corridor.There is a hard surface with a scanner!");
getchar();
printf("\nIt seems like Gordel is upto his old cleverness.He has used a morse code knock scanner!But what is the password?");
getchar();
printf("\nSuddenly you step and feel crunching sounds on the ground!It seems like there is redstone powder leaving a trail through a hole.");
getchar();
printf("\nYou peak through the hole and find a dimension portal created only by Gordel!");
getchar();
printf("\nSo do you want to:\n1.Try to break through the gate with force?\2.Enter the hole\n Your move: ");
scanf("%d",&door);
switch(door){
case 1:
    printf("\nWhich weapon do you want to use?\n1.Grenade\n2.Bazooka\n  Your move:");
    scanf("%d",&breaker);
    if(breaker==1){
        printf("\nYou throw a grenade!But the door does not break!Try again.");
            }
    else{
    printf("\nYou fire with the bazooka!\nThe door has broken!\nYou have entered a dark murky cave.You open the lighter and see that there is a pond with many poisonous cobras!\nThey have all bitten you and you have died.Start from the last checkpoint");
    }
    goto ass;

case 2:
    printf("\nYou crawl into the space.It goes deep!At the end you see that there is a red button.");
    getchar();
    printf("\nYou pressed the button and there is a virtual video!It is messaged to you by Gordel!");
    getchar();
    printf("\nGordel:I knew it dude!You have found me %s!I know you are here for something!");
    getchar();
    printf("\nBut I am stuck with some sucky bandits who have forced me to create this harmful virus.",name);
    getchar();
    printf("\nBut I know you will help them!\nI know you are adventurous, so you have 2 option:\n1.You can either use the 4th dimensional\n   or\n2.You can use a set of instruction through a mysterious dimension.\n  Its your choice %s",name);
    break;
}
getchar();
printf("\nOH NO!Seems like those bandits have captured Gordel!But what do you want to do according to him?:");
scanf("%d",&dimension);
switch(dimension){
case 1:
    printf("\nGordel:Seems like your the real deal!");
    printf("\nAlright %s,here are the directions:\n1.Go through the death doom to fall into a Batman cave.\n2.Latitude 26,longitude 27 to enter through Lion's kingdom.\n3.Capttain Nemo's log you read to be enlightened like the Buddha.\n4.Then shall you rescue your dear friend Gordel,\n5.Yet shall you see all that's not what it seems.",name);
    break;

case 2:
    printf("\nGordel:Seems like he sent an assistant!But I will not give you direct directions.");
    getchar();
    printf("\nHere are the directions:\n1.Go through the death doom to fall into a Batman cave.\n2.Latitude 26,longitude 27 to enter through Lion's kingdom.\n3.Captain Nemo's log you read to be enlightened like the Buddha.\n4.Then shall you rescue your dear friend Gordel,\n5.Yet shall you see all that's not what it seems.");
    break;
}
    printf("\nAnyways,you will need this creation of mine which will help you!");
    getchar();
    printf("\nThe ShapeShifter XLS!But remember it needs a special battery-XLS3000.\nMine is only charged for one blast!");
    xls++;
    getchar();
    printf("\nLooks like you need your geologist assistant's help!");
    getchar();
    printf("\nGeo assistant:Looks like your friend means the Lockhart desert and the location's coordinates.\nBut I need more time to research the other infos!I will send you your jet!");
    getchar();
    printf("\nThe jet has arrived at Gordel's helipad.Go!");
    taka++;
    retask();
    getchar();
    printf("\nYou have reached the Lockhart's deserts.Location is locked on.Jump Now!");
    printf("\nOH NO!Looks like you don't have a parachute.\nYou have 2 options:\n1.Use the XLS on your water to turn it into a parachute.\n2.Use your backpack to break your fall\n  Your move:");
    scanf("%d",&life);
    switch(life){
case 1:
    printf("\nYou have shapeshifted your water to save your life!But you don't have a lot of water to survive in the desert.\nYour health has been reduce by half!");
    myhlth=myhlth/2;
    break;

case 2:
    printf("\nYou have used your backpack to break your fall!But you broke your supplies!Your defense,bazooka and common attacks have been damaged");
    gun=gn;
    gn=(gn/2)/2;
    gun=gun-gn;
    sword=swd;
    swd=(swd/2)/2;
    sword=sword-swd;
    bazooka=bazooka/2;
    defense=dfns;
    dfns=(dfns/2)/2;
    defense=defense-dfns;
    break;
    }
    getchar();
    printf("\nYou have been dragging around in the desert all day.Finally when you have given up hope,you fall into a hole!");
    getchar();
    printf("\nIt is too dark to see when bats flood the whole cave blurring your vision!");
    printf("\nYou find way front and move when you suddenly see light!");
    getchar();
    printf("\nYou run towards it and finally come out of the dark!");
    getchar();
    printf("\nYou see a very lush and green circle!You have reached the 2nd stage of the clue!");
    taka++;
    retask();
    getchar();
    printf("\nBeebop!Beebop!");
    getchar();
    printf("\nGeo assistant:Sir!I have decoded our friend's message!");
    getchar();
    printf("\nHowever the second stage is giving you Vernian directions to a certain destination from journey to the mysterious island.");
    getchar();
    printf("Then you have to search for the statue of Buddha where you will find your friend.",name);
    getchar();
    printf("\nLooks like Gordel was Vernian after all!He often read his Journey to the mysterious island and had given vivid descriptions.");
    getchar();
    printf("\nBut following those directions in this dense jungle will be hard.You will have to use your sword.");
    getchar();
    printf("\nYou have come half the way and stop at a river.But suddenly a tiger comes out from nowhere!Fight her!");
     opphlth=myhlth+125;
        printf("\nYour health=%d   Opponent's health=%d",myhlth,opphlth);
        while(opphlth>=0 || myhlth>=0){
        printf("\nChoose your moves!\nAttack:\n1.Gun\n2.Sword\nYour move:");
        scanf("%d",&mymove);
        op=rendNum(2);
        switch(mymove){
      case 1:
        opphlth=opphlth-gun;
        printf("\nYou shot your opponent with a gun.\nOpponent's health=%d   Your health=%d",opphlth,myhlth);
          break;


      case 2:

        opphlth=opphlth-sword;
        printf("\nYou have attacked with a sword.Your opponent's health=%d   Your health=%d",opphlth,myhlth);
        break;

    }

switch(op){
      case 1:

            myhlth=myhlth-75;
             printf("\nThe tiger has pierced you with her sharp teeth.Opponent health=%d   Your health=%d",opphlth,myhlth);

        break;

      case 2:
        myhlth=myhlth-45;
        printf("\nThe tiger has pierced you with her sharp claws.Opponent health=%d   Your health=%d",opphlth,myhlth);
        }
        break;

    }
    if(opphlth < 0 || myhlth <0){

    }


    if(opphlth<=0){
            printf("\n\nCONGRATS! YOU HAVE DEFEATED THE TIGER!\nYou can now move on!");
    }
    else{
        printf("\nOH NO!You have been heavily injured.But the tiger falls in the water.You are in luck!");
    }

    getchar();
    printf("\nYou start swimming through the water.But suddenly a crocodile has risen up and is chasing you!\nKeep tapping 'G' to escape from it!");
    scanf("%s",&water);
    while(land==5){
    if(strcmp(water,"g")==0){
        land++;
    }
    printf("\nOH NO!The crocodile is getting closer!");
    }
     taka++;
    retask();
      printf("\nPhew!You have successfully tackled the crocodile and got ashore.");
      getchar();
      printf("\nYou see a big tower which seems like the last destination on the route!Go ahead!");
      getchar();
      printf("\nYou observe the tower all the way round but see nothing unusual.");
      getchar();
      printf("\nSuddenly a loud booming sound from above has knocked you out.\nYou have lost all consciousness.");
     hlth=hlth+2;
     reset();
     getchar();
     printf("\nYou suddenly wake up upon hearing a loud thud and see some people standing around you.");
     getchar();
     printf("\nWhen you observe them you recognize a tattoo on one of the people's neck.\nIt is the same one as Kakizu!");
     getchar();
     printf("\n%s:Who are you?Where is Gordel?",name);
     getchar();
            printf("\nA very tall person:OH!You know Gordel!Excellent!We are the mighty Caron gang!Fear us!");
            getchar();
            printf("\nThe scarred man:As for Gordel he is as good as dead!No who are you?!");
            getchar();
            printf("n%s:I am his friend.Now tell me all about your little scheme with the Corona virus!",name);
            getchar();
            printf("\nOh really!Then you may also know that we will kill you!");
            getchar();
            printf("\nOh no!The man has pointed a knife at you with murderous intent!\nYou have 2 moves:\n1.Kick him and start fighting\n2.Stall while cutting the rope");
            scanf("%d",&escape);
            switch(escape){
        case 1:
            pnt++;
            break;

        case 2:
             printf("\n%s:Looks like you guys are a gucci gang of devils eh!",name);
             getchar();
             printf("\nThe man with the knife:DUH!People tremble upon hearing our name!");
             getchar();
             printf("\nThe man with the knife:Well do you want to become more fearsome?\n");
            break;

            }

return 0;
}



int rendNum (int a) {
   int n;
       n = rand() % a  + 1;
   return n;
}

int rendR (int min, int max) {

    srand(time(0));

        int num = (rand() % (max - min + 1)) + min;

   return num;

}
void reset(){
    myhlth=70+(125*hlth);
}
void retask(){
money=0+(365*taka);
}
int assist(){
 int google=rendNum(2);
 switch(google){
 case 1:
     printf("\nGo to the most obvious info. site");
     break;

 case 2:
    printf("\nSuspicious!Ask the unusual people how they have succeeded!");
    break;
 }
}
