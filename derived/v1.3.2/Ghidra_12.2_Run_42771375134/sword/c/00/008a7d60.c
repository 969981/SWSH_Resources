/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a7d60; name: FUN_008a7d60
 */


void FUN_008a7d60(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar3 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x90));
    if (iVar1 == 0) {
      uVar3 = FUN_008a8060(param_1);
      if ((uVar3 & 1) == 0) {
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0
           )) {
          plVar4 = (long *)(**(code **)*puVar8)(puVar8);
          lVar7 = FUN_00897d00();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar7) {
              puVar8 = puVar8 + -10;
              goto LAB_008a7f18;
            }
          }
        }
        puVar8 = (undefined8 *)0x0;
LAB_008a7f18:
        FUN_008a6b70(puVar8,0xcf39f8ca2348b32d,0,0);
      }
      else {
        lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        uVar3 = FUN_01520b70(lVar7,*(undefined4 *)(param_1 + 0x98),1);
        if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
        plVar4 = (long *)(**(code **)*puVar8)(puVar8);
        lVar5 = FUN_00897d00();
        for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
        }
        plVar4 = *(long **)(puVar8[0xb] + 0x10);
        uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(puVar8[0xb] + 0x1c));
        FUN_0087cf20();
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
        FUN_014c7bf0(uVar9,0,uVar6);
        uVar2 = FUN_0087cdb0(uVar6);
        FUN_014c93c0(uVar9,1,uVar2);
        FUN_008a6b70(puVar8 + -10,0xccae60bd82ed1938,0,0);
        FUN_008a6e20(puVar8 + -10,*(undefined4 *)(param_1 + 0x98),uVar6,1);
        *(undefined1 *)(param_1 + 0x9c) = 1;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
      }
      FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
      *(undefined4 *)(param_1 + 0x7c) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = 3;
      FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
    }
  }
  return;
}


