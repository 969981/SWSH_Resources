/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140f540; name: FUN_0140f540
 */


void FUN_0140f540(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  long local_58;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_80);
  lVar3 = local_80;
  if (local_80 != 0) {
    puVar6 = *(undefined8 **)(local_80 + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar6)(puVar6);
      lVar2 = FUN_01410b60();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar6 = puVar6 + -10;
          goto LAB_0140f5b8;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_0140f5b8:
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    if (puVar6 != (undefined8 *)0x0) {
      local_80 = 0x306820c73ecd4d91;
      local_78 = "notice";
      local_70 = 6;
      local_68 = 0;
      lVar3 = FUN_014149c0(*(undefined8 *)(param_1 + 0x548),&local_80);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (lVar3 == 0) {
        return;
      }
      FUN_01415300(lVar3);
      local_58 = 0;
      (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_80);
      lVar2 = local_80;
      if (local_80 != 0) {
        puVar7 = *(undefined8 **)(local_80 + 0x60);
        if (puVar7 != (undefined8 *)0x0) {
          plVar1 = (long *)(**(code **)*puVar7)(puVar7);
          lVar4 = FUN_01410b60();
          for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
            if (plVar1 == (long *)lVar4) {
              puVar7 = puVar7 + -10;
              goto LAB_0140f690;
            }
          }
          puVar7 = (undefined8 *)0x0;
        }
LAB_0140f690:
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
        if (puVar7 != (undefined8 *)0x0) {
          uVar5 = FUN_01414b10(puVar7[0xc],0x5bb9fe782a08de0,&local_58);
          if ((uVar5 & 1) != 0) {
            lVar2 = 0;
            uVar5 = 0;
            do {
              if (*(char *)(local_58 + lVar2 + 0x74) != '\0') {
                local_88 = *(long *)(local_58 + lVar2 + 0x68);
                if (local_88 != 0) {
                  (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
                }
                FUN_01415540(lVar3,uVar5 & 0xffffffff,&local_88);
                if (local_88 != 0) {
                  (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
                  local_88 = 0;
                }
                local_90 = *(long *)(local_58 + lVar2 + 0x68);
                if (local_90 != 0) {
                  (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
                }
                FUN_01415920(lVar3,uVar5 & 0xffffffff,&local_90);
                if (local_90 != 0) {
                  (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
                  local_90 = 0;
                }
                FUN_00ff86a0(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x548) + 0xb0),0);
                lVar4 = *(long *)(local_80 + 0x60);
                if (lVar4 != 0) {
                  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
                }
                if (local_80 != 0) {
                  (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                }
                local_80 = *(long *)(&DAT_0269e390 + (long)*(int *)(local_58 + lVar2 + 0x70) * 0x18)
                ;
                local_98 = lVar4;
                if (lVar4 != 0) {
                  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
                }
                FUN_01415710(lVar3,uVar5 & 0xffffffff,&local_98,&local_80);
                if (local_98 != 0) {
                  (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
                  local_98 = 0;
                }
                FUN_014151b0(lVar3,uVar5 & 0xffffffff,
                             *(undefined4 *)
                              (&DAT_01d4a7f0 + (long)*(int *)(local_58 + lVar2 + 0x70) * 4));
                FUN_014154d0(lVar3,uVar5 & 0xffffffff);
                if (lVar4 != 0) {
                  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
                }
              }
              uVar5 = uVar5 + 1;
              lVar2 = lVar2 + 0x18;
            } while (uVar5 != 4);
            if ((*(int *)((long)puVar6 + 0x74) == 2) && (*(char *)(lVar3 + 0x5cb) == '\0')) {
              FUN_01415450(lVar3);
            }
            *(undefined1 *)(local_58 + 0x74) = 0;
            *(undefined1 *)(local_58 + 0x8c) = 0;
            *(undefined1 *)(local_58 + 0xa4) = 0;
            *(undefined1 *)(local_58 + 0xbc) = 0;
          }
          if (local_58 == 0) {
            return;
          }
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


