/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d5b10; name: FUN_012d5b10
 */


void FUN_012d5b10(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  lVar4 = FUN_012d5dd0();
  if (lVar4 == param_1 + 0x980) {
    plVar7 = (long *)(param_1 + 0x90);
    if (*plVar7 == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x80);
      pcVar5 = *(code **)(param_1 + 0x98);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x120) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x110);
      plVar7 = (long *)(param_1 + 0x120);
      pcVar5 = *(code **)(param_1 + 0x128);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x1b0) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x1a0);
      plVar7 = (long *)(param_1 + 0x1b0);
      pcVar5 = *(code **)(param_1 + 0x1b8);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x240) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x230);
      plVar7 = (long *)(param_1 + 0x240);
      pcVar5 = *(code **)(param_1 + 0x248);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x2d0) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x2c0);
      plVar7 = (long *)(param_1 + 0x2d0);
      pcVar5 = *(code **)(param_1 + 0x2d8);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x360) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x350);
      plVar7 = (long *)(param_1 + 0x360);
      pcVar5 = *(code **)(param_1 + 0x368);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x3f0) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x3e0);
      plVar7 = (long *)(param_1 + 0x3f0);
      pcVar5 = *(code **)(param_1 + 0x3f8);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x480) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x470);
      plVar7 = (long *)(param_1 + 0x480);
      pcVar5 = *(code **)(param_1 + 0x488);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x510) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x500);
      plVar7 = (long *)(param_1 + 0x510);
      pcVar5 = *(code **)(param_1 + 0x518);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x5a0) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x590);
      plVar7 = (long *)(param_1 + 0x5a0);
      pcVar5 = *(code **)(param_1 + 0x5a8);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x630) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x620);
      plVar7 = (long *)(param_1 + 0x630);
      pcVar5 = *(code **)(param_1 + 0x638);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x6c0) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x6b0);
      plVar7 = (long *)(param_1 + 0x6c0);
      pcVar5 = *(code **)(param_1 + 0x6c8);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x750) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x740);
      plVar7 = (long *)(param_1 + 0x750);
      pcVar5 = *(code **)(param_1 + 0x758);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x7e0) == 0) {
      puVar6 = (undefined8 *)(param_1 + 2000);
      plVar7 = (long *)(param_1 + 0x7e0);
      pcVar5 = *(code **)(param_1 + 0x7e8);
      *puVar6 = param_2;
    }
    else if (*(long *)(param_1 + 0x870) == 0) {
      puVar6 = (undefined8 *)(param_1 + 0x860);
      plVar7 = (long *)(param_1 + 0x870);
      pcVar5 = *(code **)(param_1 + 0x878);
      *puVar6 = param_2;
    }
    else {
      if (*(long *)(param_1 + 0x900) != 0) {
        return;
      }
      puVar6 = (undefined8 *)(param_1 + 0x8f0);
      plVar7 = (long *)(param_1 + 0x900);
      pcVar5 = *(code **)(param_1 + 0x908);
      *puVar6 = param_2;
    }
    if (pcVar5 != (code *)0x0) {
      plVar7[2] = 0;
      plVar7[3] = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      (*pcVar5)(puVar6 + 6);
    }
    if ((code *)param_3[2] != (code *)0x0) {
      (*(code *)param_3[2])(param_3 + 4,puVar6 + 6);
      lVar4 = *param_3;
      lVar1 = param_3[1];
      lVar2 = param_3[3];
      plVar7[2] = param_3[2];
      plVar7[3] = lVar2;
      *plVar7 = lVar4;
      plVar7[1] = lVar1;
    }
  }
  else {
    pcVar5 = *(code **)(lVar4 + 0x18);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(long *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      (*pcVar5)(lVar4 + 0x30);
    }
    if ((code *)param_3[2] != (code *)0x0) {
      (*(code *)param_3[2])(param_3 + 4,lVar4 + 0x30);
      lVar1 = *param_3;
      lVar2 = param_3[1];
      lVar3 = param_3[3];
      *(long *)(lVar4 + 0x20) = param_3[2];
      *(long *)(lVar4 + 0x28) = lVar3;
      *(long *)(lVar4 + 0x10) = lVar1;
      *(long *)(lVar4 + 0x18) = lVar2;
    }
  }
  return;
}


