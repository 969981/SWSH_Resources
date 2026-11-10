/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc00e0; name: FUN_00cc00e0
 */


undefined8 FUN_00cc00e0(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 local_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  FUN_012b4da0(auStack_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 400),
               *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x180));
  local_98 = 0xe0346c57550c6825;
  local_90 = "DATA";
  local_88 = 4;
  FUN_012b4250(auStack_80,auStack_70,&local_98);
  lVar2 = FUN_012b40f0(auStack_80);
  if (lVar2 != 0) {
    uVar5 = 1;
    do {
      FUN_012b4190(auStack_a8,auStack_80,(long)(int)(uVar5 - 1));
      local_98 = 0xfd07074159b797bd;
      local_90 = "categoryHash";
      local_88 = 0xc;
      FUN_012b4250(auStack_b8,auStack_a8,&local_98);
      local_c0 = 0;
      lVar2 = FUN_012b4b40(auStack_b8,&local_c0);
      local_98 = 0x4bb7c6e790d4fc0a;
      local_90 = "nameHash";
      local_88 = 8;
      FUN_012b4250(auStack_b8,auStack_a8,&local_98);
      local_c0 = 0;
      lVar3 = FUN_012b4b40(auStack_b8,&local_c0);
      if ((lVar2 == *param_2) && (lVar3 == *param_3)) {
        return 1;
      }
      uVar4 = FUN_012b40f0(auStack_80);
      uVar1 = (ulong)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar1 < uVar4);
  }
  return 0;
}


