/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaf350; name: FUN_00eaf350
 */


uint FUN_00eaf350(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_220 [392];
  undefined4 local_98;
  undefined2 uStack_94;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  undefined2 local_82;
  undefined6 uStack_80;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  undefined2 local_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  if (*(char *)(param_1 + 0x450) == '\0') {
    uVar1 = 0;
  }
  else {
    uStack_92 = 1;
    local_98 = 0;
    uStack_94 = 0;
    local_8c = 0xffff;
    local_90 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    local_82 = 0;
    uStack_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_6a = 0;
    local_62 = 0xffff;
    uStack_60 = 0xffffffffffff;
    local_5a = 0xffff;
    uStack_58 = 0xffff;
    local_52 = 0;
    uStack_50 = 0xff;
    local_48 = 0;
    uStack_4e = 0;
    lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar3 + 0x7b0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    uVar1 = FUN_00e05080(lVar2,param_1 + 0x450,*(undefined4 *)(param_1 + 0x3b0),&local_98);
    if ((uVar1 & 1) != 0) {
      *(ulong *)(param_2 + 0x280) = CONCAT26(local_82,uStack_88);
      *(ulong *)(param_2 + 0x278) = CONCAT26(uStack_8a,CONCAT24(local_8c,local_90));
      *(ulong *)(param_2 + 0x270) =
           CONCAT17(uStack_91,CONCAT16(uStack_92,CONCAT24(uStack_94,local_98)));
      *(ulong *)(param_2 + 0x2a0) = CONCAT26(local_62,uStack_68);
      *(ulong *)(param_2 + 0x298) = CONCAT26(local_6a,uStack_70);
      *(undefined8 *)(param_2 + 0x290) = local_78;
      *(ulong *)(param_2 + 0x288) = CONCAT26(uStack_7a,uStack_80);
      *(undefined8 *)(param_2 + 0x2c0) = local_48;
      *(ulong *)(param_2 + 0x2b8) = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
      *(ulong *)(param_2 + 0x2b0) = CONCAT26(local_52,uStack_58);
      *(ulong *)(param_2 + 0x2a8) = CONCAT26(local_5a,uStack_60);
      FUN_00fa3360(auStack_220,local_98,uStack_94);
      memcpy((void *)(param_2 + 0xf0),auStack_220,0x171);
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  return uVar1 & 1;
}


