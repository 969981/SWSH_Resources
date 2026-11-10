/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087fb10; name: FUN_0087fb10
 */


void FUN_0087fb10(undefined8 param_1,float *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  float fVar7;
  
  if ((param_3 - 1 & 0xff) < 5) {
    uVar1 = param_3 & 0xff;
    uVar6 = FUN_0087f680(param_1,uVar1 + 0x36);
    *param_2 = (float)uVar6 / 10.0;
    uVar3 = FUN_0087f680(param_1,uVar1 + 0x3b);
    *(undefined1 *)(param_2 + 1) = uVar3;
    cVar4 = FUN_0087f680(param_1,uVar1 + 0x40);
    *(char *)((long)param_2 + 5) = cVar4;
    cVar5 = FUN_0087f680(param_1,uVar1 + 0x45);
    *(char *)((long)param_2 + 6) = cVar5;
    uVar3 = FUN_0087f680(param_1,uVar1 + 0x4a);
    uVar2 = param_3 * 2 - 2;
    uVar1 = uVar2 & 0xfe;
    *(undefined1 *)((long)param_2 + 7) = uVar3;
    uVar3 = FUN_0087f680(param_1,uVar1 + 0x50);
    *(undefined1 *)(param_2 + 2) = uVar3;
    fVar7 = (float)FUN_0087f680(param_1,uVar1 + 100);
    param_2[3] = fVar7;
    fVar7 = (float)FUN_0087f680(param_1,uVar1 + 0x5a);
    uVar1 = uVar2 & 0xff | 1;
    param_2[4] = fVar7;
    uVar3 = FUN_0087f680(param_1,uVar1 + 0x50);
    *(undefined1 *)(param_2 + 5) = uVar3;
    fVar7 = (float)FUN_0087f680(param_1,uVar1 + 100);
    param_2[6] = fVar7;
    fVar7 = (float)FUN_0087f680(param_1,uVar1 + 0x5a);
    param_2[7] = fVar7;
    if ((float)uVar6 / 10.0 == 0.0) {
      *param_2 = 1.0;
    }
    if (cVar4 == '\0') {
      *(undefined1 *)((long)param_2 + 5) = 0;
    }
    if (cVar5 == '\0') {
      *(undefined1 *)((long)param_2 + 6) = 1;
    }
  }
  else {
    *(undefined1 *)(param_2 + 2) = 0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[0] = 1.0;
    param_2[1] = 2.3694275e-38;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
  }
  return;
}


