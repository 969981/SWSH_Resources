/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947340; name: FUN_00947340
 */


void FUN_00947340(undefined8 param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 auStack_5c [36];
  undefined2 local_38;
  undefined1 local_36;
  undefined1 auStack_28 [8];
  
  *param_2 = 0;
  uVar3 = FUN_00947470(param_1,*param_3,*(undefined8 *)(param_3 + 2));
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_009423b0(param_1);
    FUN_0093aa80(uVar4,*param_3);
    FUN_00947510(param_1,*param_3);
    iVar1 = *param_3;
    if (iVar1 == 5) {
      FUN_009475d0(param_1);
      iVar1 = *param_3;
    }
    if (iVar1 == 8) {
      local_78[0] = 0x1f;
      local_70 = 0;
      local_74 = 10;
      local_68 = 0;
      local_60 = 0xf9;
      FUN_00943e60(auStack_5c);
      local_38 = 0;
      local_36 = 0;
      local_74 = 8;
      FUN_00942380(param_1);
      uVar2 = FUN_008f8f80();
      local_70 = CONCAT11(local_70._1_1_,uVar2);
      local_68 = FUN_008ed120(0x1f);
      FUN_00942450(param_1);
      uVar4 = FUN_009255f0();
      FUN_00947840(uVar4,auStack_28,local_78);
      iVar1 = *param_3;
    }
    if (iVar1 == 9) {
      FUN_00947690(param_1);
    }
    *param_2 = 1;
  }
  return;
}


