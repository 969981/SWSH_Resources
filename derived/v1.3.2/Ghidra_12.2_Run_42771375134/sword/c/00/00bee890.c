/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bee890; name: FUN_00bee890
 */


void FUN_00bee890(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *local_48;
  
  lVar6 = *(long *)(param_1 + 0x2b0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f8) = 0;
  }
  *(long *)(param_1 + 0x5f8) = lVar6;
  if (lVar6 != 0) {
    local_48 = &DAT_80a8e808288e407;
    lVar6 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_48);
    if (lVar6 != 0) {
      *(long *)(param_1 + 0x630) = lVar6;
      local_48 = (undefined1 *)0x598d0e60e0a45d28;
      lVar6 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_48);
      if (lVar6 != 0) {
        plVar7 = *(long **)(param_1 + 8);
        *(long *)(param_1 + 0x638) = lVar6;
        plVar3 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x1a0,0x10);
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar7;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        puVar2 = PTR_DAT_027192f0;
        puVar1 = PTR_DAT_027192f0 + 0x10;
        plVar3[2] = param_1 + 0x100;
        plVar3[3] = 0;
        plVar3[6] = 0;
        plVar3[7] = 0;
        plVar3[0x14] = 0;
        plVar3[4] = 0;
        plVar3[5] = 0;
        *plVar3 = (long)puVar1;
        plVar3[1] = param_1;
        *(undefined8 *)((long)plVar3 + 0x196) = 0;
        plVar3[0x31] = 0;
        plVar3[0x32] = 0;
        plVar3[0x2f] = 0;
        plVar3[0x30] = 0;
        plVar3[0x2d] = 0;
        plVar3[0x2e] = 0;
        plVar3[0x2b] = 0;
        plVar3[0x2c] = 0;
        plVar3[0x29] = 0;
        plVar3[0x2a] = 0;
        plVar3[0x27] = 0;
        plVar3[0x28] = 0;
        plVar3[0x25] = 0;
        plVar3[0x26] = 0;
        plVar3[0x23] = 0;
        plVar3[0x24] = 0;
        plVar3[0x21] = 0;
        plVar3[0x22] = 0;
        plVar3[0x1f] = 0;
        plVar3[0x20] = 0;
        plVar3[0x1d] = 0;
        plVar3[0x1e] = 0;
        plVar3[0x1b] = 0;
        plVar3[0x1c] = 0;
        plVar3[0x19] = 0;
        plVar3[0x1a] = 0;
        plVar3[0x17] = 0;
        plVar3[0x18] = 0;
        plVar3[0x15] = 0;
        plVar3[0x16] = 0;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *(long *)(param_1 + 0x610);
        *(long **)(param_1 + 0x610) = plVar3;
        if (lVar6 != 0) {
          uVar4 = *(ulong *)(param_1 + 0x620);
          if (0x19f < uVar4) {
            uVar9 = 0;
            lVar8 = lVar6 + 0x40;
            do {
              pcVar5 = *(code **)(lVar8 + -0x18);
              *(undefined **)(lVar8 + -0x40) = puVar2 + 0x10;
              if (pcVar5 != (code *)0x0) {
                *(undefined8 *)(lVar8 + -0x10) = 0;
                *(undefined8 *)(lVar8 + -8) = 0;
                *(undefined8 *)(lVar8 + -0x20) = 0;
                *(undefined8 *)(lVar8 + -0x18) = 0;
                (*pcVar5)(lVar8);
              }
              if (*(long *)(lVar8 + -0x28) != 0) {
                (**(code **)(*(long *)(*(long *)(lVar8 + -0x28) + 0x48) + 0x18))();
                *(undefined8 *)(lVar8 + -0x28) = 0;
              }
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + 0x1a0;
            } while (uVar9 < uVar4 / 0x1a0);
            uVar4 = *(ulong *)(param_1 + 0x620);
          }
          (**(code **)(**(long **)(param_1 + 0x618) + 0x18))
                    (*(long **)(param_1 + 0x618),lVar6,uVar4,*(undefined8 *)(param_1 + 0x628));
        }
        *(undefined8 *)(param_1 + 0x620) = 0x1a0;
        *(undefined8 *)(param_1 + 0x628) = 0x10;
        *(long **)(param_1 + 0x618) = plVar7;
        *(bool *)(param_1 + 0x5d8) = *(int *)(*(long *)(param_1 + 0x5d0) + 0x54) == 0;
        FUN_00ffa160(param_1,1,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


