/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6f200; name: FUN_00e6f200
 */


void FUN_00e6f200(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  if (((param_2 != -0x6693edc2df46de9a) && (param_2 != -0x4bdfcd9e6b85f156)) &&
     (param_2 != -0x6693ecc2df46dce7)) {
    return;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar2 == 0) {
    lVar2 = FUN_01524df0(0);
    lVar2 = *(long *)(lVar2 + 0x88);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = FUN_01524df0(lVar2);
    lVar2 = *(long *)(lVar2 + 0x88);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar2 < 0xeccce1e75b698c) {
    if (-0x1ddbab7f25f666db < lVar2) {
      if (lVar2 == -0x1ddbab7f25f666da) {
LAB_00e6f3e4:
        uVar1 = 2;
        goto LAB_00e6f3e8;
      }
      if (lVar2 != -0x1ddbaa7f25f66527) {
        return;
      }
LAB_00e6f3c8:
      uVar1 = 3;
      goto LAB_00e6f3e8;
    }
    if (lVar2 == -0x1ddbad7f25f66a40) {
LAB_00e6f3d0:
      *param_1 = 0;
      return;
    }
    if (lVar2 != -0x1ddbac7f25f6688d) {
      return;
    }
  }
  else {
    if (0xeccee1e75b6cf1 < lVar2) {
      if (lVar2 == 0xeccee1e75b6cf2) goto LAB_00e6f3e4;
      if (lVar2 != 0xeccfe1e75b6ea5) {
        return;
      }
      goto LAB_00e6f3c8;
    }
    if (lVar2 == 0xeccce1e75b698c) goto LAB_00e6f3d0;
    if (lVar2 != 0xeccde1e75b6b3f) {
      return;
    }
  }
  uVar1 = 1;
LAB_00e6f3e8:
  *param_1 = uVar1;
  return;
}


