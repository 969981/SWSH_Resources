/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441670; name: FUN_00441670
 */


undefined8 FUN_00441670(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auStack_1f0 [88];
  undefined8 local_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined1 auStack_158 [96];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_58;
  
  local_60 = CONCAT44(4,*(undefined4 *)(param_1 + 0xb8));
  local_58 = local_58 & 0xffffff00;
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    local_58 = *(uint *)(param_1 + 0x100);
    local_60 = *(undefined8 *)(param_1 + 0xf8);
    lVar2 = FUN_0043e8c0(param_1);
  }
  else {
    if ((*(byte *)(lVar2 + 800) & 0xf) == 2) {
      local_60 = CONCAT44(1,*(undefined4 *)(param_1 + 0xb8));
    }
    FUN_0048c100(lVar2,&local_60,1);
    lVar2 = FUN_0043e8c0(param_1);
  }
  if (lVar2 == 0) {
    return 0xf;
  }
  local_98 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(undefined4 *)(param_1 + 0xe8);
  local_88 = param_1 + 0x50;
  local_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 == 0) {
    local_80 = lVar2;
  }
  else {
    FUN_0045b670(lVar2);
    bVar1 = local_80 != 0;
    local_80 = lVar2;
    if (bVar1) {
      FUN_0045b680();
    }
  }
  memcpy(auStack_1f0,(void *)(param_1 + 0x68),0x48);
  local_190 = 0xff00;
  local_d0 = 0;
  uStack_c8 = 0;
  local_188 = 0;
  uStack_180 = 0x3f80000000000000;
  local_198 = 0;
  local_168 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_160 = 0;
                    /* WARNING: Subroutine does not return */
  memset(auStack_158,0,0x5c);
}


