/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b2bd0; name: FUN_014b2bd0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_014b2bd0(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  if (30000 < param_2) {
    if (param_2 < 0x9c41) {
      lVar2 = *(long *)(DAT_02a748d8 + 0x60);
      if (lVar2 == 0) {
        uVar1 = FUN_0077ea20(0);
      }
      else {
        plVar3 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar1 = FUN_0077ea20(lVar2);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      if (param_2 - 0x7531U < uVar1) {
        lVar2 = *(long *)(DAT_02a748d8 + 0x60);
        *param_1 = lVar2;
        goto joined_r0x014b2da8;
      }
    }
    else if (param_2 < 0xea61) {
      lVar2 = *(long *)(DAT_02a748e0 + 0x60);
      if (lVar2 == 0) {
        uVar1 = FUN_0077ea20(0);
      }
      else {
        plVar3 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar1 = FUN_0077ea20(lVar2);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      if (param_2 - 0x9c41U < uVar1) {
        lVar2 = *(long *)(DAT_02a748e0 + 0x60);
        *param_1 = lVar2;
        goto joined_r0x014b2da8;
      }
    }
    else if (param_2 < 0x10000) {
      lVar2 = *(long *)(DAT_02a748e8 + 0x60);
      if (lVar2 == 0) {
        FUN_0077ea20(0);
        lVar2 = *(long *)(DAT_02a748e8 + 0x60);
        *param_1 = lVar2;
      }
      else {
        plVar3 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_0077ea20(lVar2);
        (**(code **)(*plVar3 + 0x18))(plVar3);
        lVar2 = *(long *)(DAT_02a748e8 + 0x60);
        *param_1 = lVar2;
      }
      goto joined_r0x014b2da8;
    }
  }
  lVar2 = *(long *)(DAT_02a748d0 + 0x60);
  *param_1 = lVar2;
joined_r0x014b2da8:
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014b2c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


