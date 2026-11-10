/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ad3f0; name: FUN_007ad3f0
 */


void FUN_007ad3f0(long param_1,undefined4 param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  int local_58 [6];
  
  puVar1 = PTR_DAT_02716810;
  if (*(char *)(param_1 + 0x110) == '\0') {
    plVar6 = (long *)(PTR_DAT_02716810 + 0x28);
    if (*PTR_DAT_02716808 != '\0') {
      puVar4 = (uint *)FUN_007ad6c0(*(undefined8 *)PTR_DAT_02716818);
      uVar2 = *puVar4;
      if (uVar2 != 0) {
        lVar5 = **(long **)(puVar1 + 0xa0);
        if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_017cd1d0("c:/projects/env/NintendoSDK/NintendoSDK/../NintendoSDK-Pia/../NintendoSDK-NEX//Include\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    if (((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) &&
       (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
      if ((param_3 & 1) == 0) {
        FUN_017e5180(lVar5,param_2,0);
        cVar3 = *(char *)(param_1 + 0x90);
      }
      else {
        FUN_017e5180(lVar5,0xffffffff,0);
        cVar3 = *(char *)(param_1 + 0x90);
      }
      goto joined_r0x007ad510;
    }
  }
  cVar3 = *(char *)(param_1 + 0x90);
joined_r0x007ad510:
  if (((cVar3 != '\0') && (*(char *)(param_1 + 0x91) != '\0')) &&
     (*(char *)(param_1 + 0x92) == '\0')) {
    if (*(long *)(param_1 + 0xb0) != 0) {
      FUN_01852540(local_58);
      puVar1 = PTR_LAB_02716800;
      if (local_58[0] < 0) {
        puVar1 = (undefined *)0x0;
      }
      if (puVar1 != (undefined *)0x0) {
        return;
      }
    }
    if (((*(long *)(param_1 + 0x128) != 0) && (*(int *)(*(long *)(param_1 + 0x128) + 0x54) != 0)) &&
       (*(long **)(param_1 + 0x130) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x130) + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x92) = 1;
  }
  return;
}


