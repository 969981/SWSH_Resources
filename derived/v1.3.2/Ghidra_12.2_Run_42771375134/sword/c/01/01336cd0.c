/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01336cd0; name: FUN_01336cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01336cd0(long param_1)

{
  long *plVar2;
  long *plVar1;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_110;
  int *local_108;
  long **pplStack_100;
  long local_a8;
  int *piStack_a0;
  long **local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  long *local_60;
  undefined8 uStack_58;
  int local_44;
  
  local_44 = *(int *)(param_1 + 0x6c);
  local_78 = *(long **)(param_1 + 0x58);
  local_108 = &local_44;
  pplStack_100 = &local_90;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  plVar3 = *(long **)(param_1 + 0x70);
  plVar1 = *(long **)(param_1 + 0x78);
  lStack_110 = param_1;
  local_a8 = param_1;
  piStack_a0 = local_108;
  local_98 = pplStack_100;
  if (plVar3 != plVar1) {
    do {
      while (((*plVar3 == 0 || (*(int *)(*plVar3 + 0x54) == 0)) || ((char)plVar3[3] != '\0'))) {
        plVar3 = plVar3 + 4;
        if (plVar1 == plVar3) goto LAB_01336db4;
      }
      local_60 = plVar3;
      FUN_0133ae20(&lStack_110,&local_60);
      plVar3 = plVar3 + 4;
    } while (plVar1 != plVar3);
  }
LAB_01336db4:
  FUN_0133ae30(&lStack_110);
  plVar3 = local_88;
  if (local_44 == 3) {
    if (local_90 != local_88) {
      plVar1 = local_90;
      puVar4 = (undefined8 *)&DAT_02a6e9b0;
      do {
        plVar2 = plVar1 + 1;
        lVar5 = *plVar1;
        local_60 = (long *)CONCAT44((float)((ulong)*puVar4 >> 0x20) +
                                    (float)((ulong)_DAT_02a6e940 >> 0x20),
                                    (float)*puVar4 + (float)_DAT_02a6e940);
        uStack_58 = CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                             (float)((ulong)uRam0000000002a6e948 >> 0x20),
                             (float)puVar4[1] + (float)uRam0000000002a6e948);
        FUN_012dc9c0(*(undefined8 *)(lVar5 + 0x10),&local_60);
        *(undefined1 *)(lVar5 + 0x18) = 1;
        plVar1 = plVar2;
        puVar4 = puVar4 + 2;
      } while (plVar3 != plVar2);
    }
  }
  else if (local_44 == 4) {
    FUN_01336ec0(param_1,&local_90);
  }
  else if (local_88 != local_90) {
    local_44 = 0;
    for (plVar1 = local_90; plVar1 != plVar3; plVar1 = plVar1 + 1) {
      FUN_013376d0(&local_a8,*plVar1);
    }
  }
  if (local_90 != (long *)0x0) {
    local_88 = local_90;
    (**(code **)(*local_78 + 0x18))(local_78,local_90,local_80 - (long)local_90,8);
  }
  return;
}


