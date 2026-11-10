/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00660080; name: FUN_00660080
 */


void FUN_00660080(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  ulong local_a4;
  undefined4 local_9c;
  long *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 uStack_51;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_9c = 0;
  local_a4 = 0;
  local_ac = 0;
  local_b4 = 0;
  local_bc = 0;
  uStack_b8 = 0;
  local_c4 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    uVar3 = FUN_005bc6f0();
  }
  else {
    uVar3 = FUN_005bc740();
  }
  uStack_c8 = (undefined4)uVar3;
  local_c4 = (undefined4)((ulong)uVar3 >> 0x20);
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (long *)0x0;
  local_90 = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    local_98 = (long *)FUN_005bc6f0();
  }
  else {
    local_98 = (long *)FUN_005bc740();
  }
  local_68 = 0xffffffff00000000;
  local_60 = 0xffffffff;
  uStack_5c = 0xffffffff;
  uStack_58 = 0;
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0xffffffffffffffff;
  local_52 = 0;
  local_54 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0x800000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0;
  FUN_005c80d0(param_1 + 0x11,&uStack_c8);
  FUN_005c80d0(param_1 + 0x17,&local_98);
  param_1[0x1d] = local_68;
  param_1[0x20] = local_50;
  param_1[0x21] = uStack_48;
  param_1[0x1e] = CONCAT44(uStack_5c,local_60);
  param_1[0x1f] = CONCAT17(uStack_51,CONCAT16(local_52,CONCAT24(local_54,uStack_58)));
  if ((local_70 & 1) == 0) {
    if ((local_90 != 0) && (local_98 != (long *)0x0)) {
      (**(code **)(*local_98 + 0x48))
                (local_98,local_90,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_90 = 0;
  }
  if ((((local_a4 & 0x100000000) == 0) && (CONCAT44(local_bc,uStack_c0) != 0)) &&
     (plVar1 = (long *)CONCAT44(local_c4,uStack_c8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x48))
              (plVar1,CONCAT44(local_bc,uStack_c0),"../../../../Include\\SiCore/SiCore_String.inl",
               0xe1);
  }
  return;
}


