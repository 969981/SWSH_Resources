/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00938d20; name: FUN_00938d20
 */


void FUN_00938d20(ulong param_1,long param_2,undefined8 param_3,undefined2 *param_4,uint param_5,
                 undefined8 *param_6,int *param_7,undefined2 *param_8)

{
  undefined2 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  char cVar10;
  undefined8 uVar11;
  
  if (param_5 == 0) {
    uVar3 = 1;
  }
  else {
    cVar10 = '\0';
    cVar6 = '\0';
    uVar9 = (ulong)param_5;
    piVar7 = param_7;
    puVar8 = param_6;
    do {
      uVar11 = *puVar8;
      uVar1 = *param_8;
      uVar3 = FUN_008e0a00(param_3);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      uVar4 = FUN_008e0a00(uVar11);
      FUN_0093be40(uVar5,uVar4,uVar1,3,uVar3);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = FUN_008e0a00(uVar11);
      FUN_00916b10(uVar5,2,uVar2,uVar3 & 0xff,uVar1,3);
      if (7 < *piVar7) {
        cVar6 = cVar6 + '\x01';
      }
      if (*piVar7 < 7) {
        cVar10 = cVar10 + '\x01';
      }
      uVar9 = uVar9 - 1;
      param_8 = param_8 + 1;
      piVar7 = piVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar9 != 0);
    uVar3 = 3;
    if (cVar10 == '\0') {
      uVar3 = 1;
    }
    param_1 = (ulong)uVar3;
    if (cVar6 != '\0') {
      uVar3 = 2;
    }
  }
  FUN_00918430(param_1,*(undefined8 *)(param_2 + 0x18),param_5 << 1);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  if (param_5 != 0) {
    uVar9 = (ulong)param_5;
    do {
      uVar4 = FUN_008e0a00(*param_6);
      FUN_00918460(uVar5,uVar4);
      FUN_00918460(*(undefined8 *)(param_2 + 0x18),*param_7);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      uVar9 = uVar9 - 1;
      param_7 = param_7 + 1;
      param_6 = param_6 + 1;
    } while (uVar9 != 0);
  }
  FUN_00916b10(uVar5,0x8a,param_5 & 0xff,uVar3,*param_4);
  return;
}


