/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137f150; name: FUN_0137f150
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0137f150(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = FUN_0137c8d0(param_1,param_3);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0x80);
  }
  FUN_00794370(lVar2,param_2);
  lVar2 = FUN_0137c8d0(param_1,param_3);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0x88);
  }
  FUN_00794370(lVar2,param_2);
  lVar2 = FUN_0137c8d0(param_1,param_3);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x90);
  *(long *)(param_1 + 0x90) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0x90);
  }
  FUN_00794370(lVar2,param_2);
  lVar2 = FUN_0137c8d0(param_1,param_3);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x98);
  *(long *)(param_1 + 0x98) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0x98);
  }
  FUN_00794370(lVar2,param_2);
  lVar2 = FUN_0137c8d0(param_1,param_3);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0xa0);
  }
  FUN_00794370(lVar2,param_2);
  puVar4 = (undefined8 *)FUN_012dcaa0(param_1);
  local_40 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + (float)((ulong)_DAT_02a70960 >> 0x20),
                      (float)*puVar4 + (float)_DAT_02a70960);
  uStack_38 = CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                       (float)((ulong)uRam0000000002a70968 >> 0x20),
                       (float)puVar4[1] + (float)uRam0000000002a70968);
  FUN_012dc9c0(param_1,&local_40);
  FUN_012dc620(param_1,&DAT_02a70970);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar4)(puVar4);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar6 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar6;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_02715080) {
        lVar2 = FUN_01380080(puVar4 + -10,&local_40);
        goto joined_r0x0137f3a8;
      }
    }
  }
  lVar2 = FUN_01380080(0,&local_40);
joined_r0x0137f3a8:
  if (lVar2 == 0) {
    FUN_0137f030(param_1);
  }
  return;
}


