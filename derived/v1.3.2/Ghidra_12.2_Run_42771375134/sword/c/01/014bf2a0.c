/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bf2a0; name: FUN_014bf2a0
 */


void FUN_014bf2a0(undefined8 param_1,uint param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = -param_2;
  if (-1 < (int)param_2) {
    uVar8 = param_2;
  }
  FUN_0077d660();
  puVar2 = &UNK_02171de4;
  if (param_5 != 0) {
    puVar2 = &DAT_02171dfa;
  }
  if ((int)param_2 < 0) {
    uVar5 = 0x30fc;
    if (param_5 != 0) {
      uVar5 = 0x2d;
    }
    FUN_0077d5c0(param_1,uVar5);
  }
  uVar6 = *(uint *)(&DAT_02171e10 + (ulong)(param_3 - 1) * 4);
  uVar4 = 0x3000;
  if (param_5 != 0) {
    uVar4 = 0x20;
  }
  do {
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = uVar8 / uVar6;
    }
    uVar7 = uVar7 & 0xffff;
    uVar8 = uVar8 - uVar7 * uVar6;
    if (9 < uVar7) {
      uVar7 = 10;
    }
    if (param_4 == 2) {
      uVar3 = *(undefined2 *)(puVar2 + (ulong)uVar7 * 2);
LAB_014bf358:
      FUN_0077d5c0(param_1,uVar3);
    }
    else if ((uVar6 == 1) || (uVar7 != 0)) {
      FUN_0077d5c0(param_1,*(undefined2 *)(puVar2 + (ulong)uVar7 * 2));
      param_4 = 2;
    }
    else if (param_4 == 1) {
      uVar3 = uVar4;
      goto LAB_014bf358;
    }
    bVar1 = uVar6 < 10;
    uVar6 = uVar6 / 10;
    if (bVar1) {
      return;
    }
  } while( true );
}


