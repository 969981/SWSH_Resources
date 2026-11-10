/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007175b0; name: FUN_007175b0
 */


void FUN_007175b0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)param_1[1];
  lVar3 = (long)plVar7 - *param_1 >> 4;
  uVar4 = lVar3 * -0xf0f0f0f0f0f0f0f;
  if (uVar4 < param_2) {
    FUN_0071a1b0(param_1,param_2 + lVar3 * 0xf0f0f0f0f0f0f0f);
    return;
  }
  if (uVar4 != param_2) {
    plVar6 = (long *)(*param_1 + param_2 * 0x110);
    if (plVar6 != plVar7) {
      puVar1 = PTR_DAT_02710808 + 0x10;
      do {
        plVar5 = plVar7 + -0x22;
        *plVar5 = (long)puVar1;
        plVar8 = plVar7 + -0x21;
        if (*plVar8 == 0) {
          *plVar8 = 0;
          pcVar2 = (code *)plVar7[-0xf];
        }
        else {
          FUN_006e2100(*plVar8,plVar5);
          lVar3 = *plVar8;
          *plVar8 = 0;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          }
          pcVar2 = (code *)plVar7[-0xf];
        }
        if (pcVar2 != (code *)0x0) {
          plVar7[-0xe] = 0;
          plVar7[-0xd] = 0;
          plVar7[-0x10] = 0;
          plVar7[-0xf] = 0;
          (*pcVar2)(plVar7 + -0xc);
        }
        pcVar2 = (code *)plVar7[-0x1f];
        if (pcVar2 != (code *)0x0) {
          plVar7[-0x1e] = 0;
          plVar7[-0x1d] = 0;
          plVar7[-0x20] = 0;
          plVar7[-0x1f] = 0;
          (*pcVar2)(plVar7 + -0x1c);
        }
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          *plVar8 = 0;
        }
        plVar7 = plVar5;
      } while (plVar6 != plVar5);
    }
    param_1[1] = (long)plVar6;
  }
  return;
}


