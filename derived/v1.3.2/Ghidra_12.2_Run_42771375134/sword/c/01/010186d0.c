/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010186d0; name: FUN_010186d0
 */


undefined8 FUN_010186d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long local_a0 [2];
  undefined1 *local_90;
  long local_88;
  long local_80;
  undefined4 local_6c;
  char *local_68;
  
  puVar2 = PTR_DAT_02710788;
  lVar7 = *(long *)PTR_DAT_02710788;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 2) {
LAB_01018944:
    uVar6 = 1;
  }
  else {
    if (iVar1 == 1) {
LAB_01018878:
      if (((*(char *)(param_1 + 0x180) == '\0') ||
          ((*(long *)(param_1 + 0x78) != 0 && (*(char *)(*(long *)(param_1 + 0x78) + 0x170) != '\0')
           ))) && ((*(char *)(param_1 + 0x2b0) == '\0' ||
                   ((*(long *)(param_1 + 0x1a8) != 0 &&
                    (*(char *)(*(long *)(param_1 + 0x1a8) + 0x170) != '\0')))))) {
        if (*(char *)(param_1 + 0x180) != '\0') {
          uVar8 = 1;
          *(undefined4 *)(param_1 + 0x60) = 1;
          if (*(code **)(param_1 + 0x2d0) == (code *)0x0) {
LAB_010188e0:
            uVar8 = 3;
          }
          else {
            local_a0[0] = param_1 + 0x70;
            local_68 = (char *)CONCAT44(local_68._4_4_,1);
            uVar9 = (**(code **)(param_1 + 0x2d0))(param_1 + 0x2f0,&local_68,local_a0);
            if ((uVar9 & 1) != 0) goto LAB_010188e0;
          }
          *(undefined4 *)(param_1 + 0x60) = uVar8;
        }
        if (*(char *)(param_1 + 0x2b0) != '\0') {
          *(undefined4 *)(param_1 + 400) = 1;
          if (*(code **)(param_1 + 0x2d0) == (code *)0x0) {
LAB_01018924:
            uVar8 = 3;
          }
          else {
            local_a0[0] = param_1 + 0x1a0;
            local_68 = (char *)CONCAT44(local_68._4_4_,2);
            uVar9 = (**(code **)(param_1 + 0x2d0))(param_1 + 0x2f0,&local_68,local_a0);
            if ((uVar9 & 1) != 0) goto LAB_01018924;
            uVar8 = 1;
          }
          *(undefined4 *)(param_1 + 400) = uVar8;
        }
        *(undefined4 *)(param_1 + 0x50) = 2;
        goto LAB_01018944;
      }
    }
    else if (iVar1 == 0) {
      uVar4 = FUN_006e4b60(lVar7);
      *(uint *)(param_1 + 0x2c0) = uVar4;
      if (uVar4 != 0) {
        uVar11 = 0;
        plVar12 = (long *)(param_1 + 0x100);
        uVar9 = 1;
        do {
          uVar5 = FUN_006e49c0(lVar7,uVar9 & 0xffffffff);
          if ((uVar5 & 1) != 0) {
            local_68 = "keyfile.dat";
            local_6c = (undefined4)uVar9;
            FUN_01018af0(local_a0,&local_68,&local_6c);
            *(undefined1 *)(plVar12 + 0x10) = 1;
            FUN_006dccd0(&local_68,*(undefined8 *)puVar2,1,local_a0,0,*(undefined8 *)(param_1 + 8),0
                        );
            if (plVar12[-0x11] != 0) {
              (**(code **)(*(long *)(plVar12[-0x11] + 0x48) + 0x18))();
              plVar12[-0x11] = 0;
            }
            pcVar3 = local_68;
            plVar12[-0x11] = (long)local_68;
            if (local_68 != (char *)0x0) {
              plVar10 = (long *)(local_68 + 0x48);
              (**(code **)(*plVar10 + 0x10))(plVar10);
              if ((plVar12[-0x10] != 0) || (*plVar12 != 0)) {
                FUN_006e1e70(pcVar3,plVar12 + -0x12,1);
              }
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
            if ((local_88 != 0) && (local_a0[0] != 0)) {
              (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
            }
            uVar11 = uVar11 + 1;
            local_a0[0] = 0;
            local_a0[1] = 0xcbf29ce484222645;
            local_90 = &DAT_01d38550;
            local_88 = 0;
            if (local_80 != 0) {
              (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
              local_80 = 0;
            }
          }
          if (1 < uVar9) break;
          plVar12 = plVar12 + 0x26;
          uVar9 = uVar9 + 1;
        } while (uVar11 < uVar4);
      }
      *(undefined4 *)(param_1 + 0x50) = 1;
      goto LAB_01018878;
    }
    uVar6 = 0;
  }
  return uVar6;
}


