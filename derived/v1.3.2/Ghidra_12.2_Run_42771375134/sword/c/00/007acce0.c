/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007acce0; name: FUN_007acce0
 */


void FUN_007acce0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  uint local_70 [6];
  uint local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_34;
  
  if ((*(char *)(param_2 + 0x90) == '\0') || (*(char *)(param_2 + 0x93) != '\0')) {
    local_58 = local_58 & 0xffffff00;
  }
  else {
    *(undefined1 *)(param_2 + 0x93) = 1;
    *(undefined8 *)(param_2 + 0x98) = 0;
    puVar2 = PTR_DAT_02716810;
    plVar7 = (long *)(PTR_DAT_02716810 + 0x28);
    if (*PTR_DAT_02716808 != '\0') {
      puVar4 = (uint *)FUN_007ad6c0(*(undefined8 *)PTR_DAT_02716818);
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        lVar8 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_017cd1d0("c:/projects/env/NintendoSDK/NintendoSDK/../NintendoSDK-Pia/../NintendoSDK-NEX//Include\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar7 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    if (((*plVar7 != 0) && (lVar8 = *(long *)(*plVar7 + 0x10), lVar8 != 0)) &&
       (uVar5 = nn::nifm::IsNetworkAvailable(), (uVar5 & 1) == 0)) {
      FUN_017e1ec0(lVar8,1);
    }
    FUN_017b5440();
    *(undefined2 *)(param_2 + 0x91) = 0;
    if (*(long *)(param_2 + 0xb0) != 0) {
      puVar6 = (undefined8 *)FUN_017cd750(0xc0);
      if (puVar6 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        FUN_01847ff0(puVar6,0);
        puVar9 = puVar6;
      }
      FUN_017af240(&local_58,*(undefined8 *)(param_2 + 0xb0),puVar9);
      local_34 = 0x10001;
      FUN_017d0020(local_70,&local_34);
      if (local_58 == local_70[0]) {
        *(undefined8 **)(param_2 + 0x98) = puVar6;
        plVar7 = (long *)FUN_017cd750(0x28);
        if (plVar7 != (long *)0x0) {
          *plVar7 = (long)(PTR_DAT_027167f0 + 0x10);
          plVar7[1] = param_2;
          puVar2 = PTR_LAB_02716820;
          plVar7[4] = (long)puVar9;
          plVar7[2] = (long)puVar2;
          plVar7[3] = 0;
          FUN_017dee40(puVar9,2);
          FUN_017de4d0(puVar9,plVar7,0,1);
        }
      }
      else {
        if (((*(long *)(param_2 + 0x118) != 0) && (*(int *)(*(long *)(param_2 + 0x118) + 0x54) != 0)
            ) && (plVar7 = *(long **)(param_2 + 0x120), plVar7 != (long *)0x0)) {
          uVar3 = thunk_FUN_017ccbb0(&local_58);
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_58,uVar3);
        }
        *(undefined8 *)(param_2 + 0x98) = 0;
        *(undefined1 *)(param_2 + 0x93) = 0;
        (**(code **)*puVar9)(puVar9);
        FUN_017cd7a0(puVar6);
      }
      param_1[2] = local_48;
      *param_1 = CONCAT44(uStack_54,local_58);
      param_1[1] = uStack_50;
      return;
    }
    if (((*(long *)(param_2 + 0x118) != 0) && (*(int *)(*(long *)(param_2 + 0x118) + 0x54) != 0)) &&
       (*(long **)(param_2 + 0x120) != (long *)0x0)) {
      (**(code **)(**(long **)(param_2 + 0x120) + 0x10))();
    }
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined1 *)(param_2 + 0x93) = 0;
    local_58 = CONCAT31(local_58._1_3_,1);
  }
  FUN_017d0040(param_1,&local_58);
  return;
}


