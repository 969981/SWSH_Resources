/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cd350; name: FUN_005cd350
 */


void FUN_005cd350(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  byte local_88;
  long *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  long *local_50;
  long local_48;
  byte local_28;
  
  FUN_00682f60(&local_50);
  FUN_005ca160(&local_50,&DAT_01cf5f85,&DAT_01cdd9ff,0,0,1);
  FUN_005c80d0(param_1 + 0x168,&local_50);
  local_80 = *(long **)(param_1 + 0x18);
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (local_80 == (long *)0x0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      local_80 = (long *)FUN_005bc6f0();
    }
    else {
      local_80 = (long *)FUN_005bc740();
    }
  }
  FUN_005c4670(&local_b0,param_1 + 0x168,0);
  uVar3 = local_a0 + 0xf;
  if (local_90 <= uVar3) {
    uVar3 = local_a0 + 0x10;
    if (local_98 == 0) {
      if (uVar3 <= local_90 * 2) {
        uVar3 = local_90 * 2;
      }
    }
    else {
      uVar3 = local_98 + uVar3;
    }
    FUN_005c5e00(&local_b0,uVar3,1);
    uVar3 = local_a0 + 0xf;
  }
  uVar1 = CONCAT17(s_____shadercache_01d00244[7],s_____shadercache_01d00244._0_7_);
  *(ulong *)(local_a8 + local_a0 + 7) =
       CONCAT71(s_____shadercache_01d00244._8_7_,s_____shadercache_01d00244[7]);
  *(undefined8 *)(local_a8 + local_a0) = uVar1;
  local_a0 = local_a0 + 0xf;
  *(undefined1 *)(local_a8 + uVar3) = 0;
  FUN_005c80d0(&local_80,&local_b0);
  if ((local_88 & 1) == 0) {
    if ((local_a8 != 0) && (local_b0 != (long *)0x0)) {
      (**(code **)(*local_b0 + 0x48))
                (local_b0,local_a8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_a8 = 0;
  }
  FUN_005c80d0(param_1 + 0xe8,&local_80);
  if ((local_58 & 1) == 0) {
    if ((local_78 != 0) && (local_80 != (long *)0x0)) {
      (**(code **)(*local_80 + 0x48))
                (local_80,local_78,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_78 = 0;
  }
  if ((local_28 & 1) != 0) {
    s_____shadercache_01d00244[0] = s_____shadercache_01d00244[0];
    s_____shadercache_01d00244[1] = s_____shadercache_01d00244[1];
    s_____shadercache_01d00244[2] = s_____shadercache_01d00244[2];
    s_____shadercache_01d00244[3] = s_____shadercache_01d00244[3];
    s_____shadercache_01d00244[4] = s_____shadercache_01d00244[4];
    s_____shadercache_01d00244[5] = s_____shadercache_01d00244[5];
    s_____shadercache_01d00244[6] = s_____shadercache_01d00244[6];
    s_____shadercache_01d00244[8] = s_____shadercache_01d00244[8];
    s_____shadercache_01d00244[9] = s_____shadercache_01d00244[9];
    s_____shadercache_01d00244[10] = s_____shadercache_01d00244[10];
    s_____shadercache_01d00244[0xb] = s_____shadercache_01d00244[0xb];
    s_____shadercache_01d00244[0xc] = s_____shadercache_01d00244[0xc];
    s_____shadercache_01d00244[0xd] = s_____shadercache_01d00244[0xd];
    s_____shadercache_01d00244[0xe] = s_____shadercache_01d00244[0xe];
    return;
  }
  if ((local_48 != 0) && (local_50 != (long *)0x0)) {
    (**(code **)(*local_50 + 0x48))
              (local_50,local_48,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return;
}


