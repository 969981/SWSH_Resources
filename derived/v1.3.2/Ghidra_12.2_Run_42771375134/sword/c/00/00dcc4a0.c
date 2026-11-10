/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcc4a0; name: FUN_00dcc4a0
 */


undefined8 FUN_00dcc4a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_02710860;
  if ((((((*(char *)(param_1 + 0x1b0) == '\0') ||
         ((*(long *)(param_1 + 0x238) != 0 &&
          (*(char *)(*(long *)(param_1 + 0x238) + 0x170) != '\0')))) &&
        ((*(char *)(param_1 + 0x3d0) == '\0' ||
         ((*(long *)(param_1 + 0x458) != 0 &&
          (*(char *)(*(long *)(param_1 + 0x458) + 0x170) != '\0')))))) &&
       ((*(char *)(param_1 + 0x610) == '\0' ||
        ((*(long *)(param_1 + 0x698) != 0 && (*(char *)(*(long *)(param_1 + 0x698) + 0x170) != '\0')
         ))))) &&
      ((*(char *)(param_1 + 0x830) == '\0' ||
       ((*(long *)(param_1 + 0x8b8) != 0 && (*(char *)(*(long *)(param_1 + 0x8b8) + 0x170) != '\0'))
       )))) && (((*(char *)(param_1 + 0x1b0) == '\0' || (*(long *)(param_1 + 0x340) != 0)) &&
                ((*(char *)(param_1 + 0x3d0) == '\0' || (*(long *)(param_1 + 0x560) != 0)))))) {
    plVar5 = *(long **)(param_1 + 0xb58);
    if (plVar5 == *(long **)(param_1 + 0xb60)) {
      lVar3 = *(long *)(param_1 + 0x340);
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 0x560);
        if ((lVar3 != 0) &&
           (0 < (int)((ulong)(*(long *)(lVar3 + 0x228) - *(long *)(lVar3 + 0x220)) >> 7))) {
          iVar4 = 0;
          do {
            lVar3 = FUN_00753d80(lVar3,iVar4);
            if (0 < (int)((ulong)(*(long *)(lVar3 + 0x50) - *(long *)(lVar3 + 0x48)) >> 4) *
                    -0x45d1745d) {
              iVar6 = 0;
              do {
                FUN_00dcc750(&local_60,*(undefined8 *)(param_1 + 0x560),iVar4,iVar6);
                lVar3 = local_60;
                if (local_60 != 0) {
                  (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
                  local_60 = 0;
                }
                local_58 = FUN_007264c0(lVar3);
                plVar5 = *(long **)(param_1 + 0xb60);
                local_60 = lVar3;
                if (plVar5 < *(long **)(param_1 + 0xb68)) {
                  uVar2 = *(undefined8 *)(param_1 + 0xb70);
                  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
                  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00dcc748;
                  *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar2;
                  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                  *plVar5 = local_60;
                  plVar5[1] = CONCAT44(uStack_54,local_58);
                  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
                  *(long *)(param_1 + 0xb60) = *(long *)(param_1 + 0xb60) + 0x10;
                }
                else {
                  FUN_00dd2250(param_1 + 0xb58,&local_60);
                }
                iVar6 = iVar6 + 1;
                lVar3 = FUN_00753d80(*(undefined8 *)(param_1 + 0x560),iVar4);
              } while (iVar6 < (int)((ulong)(*(long *)(lVar3 + 0x50) - *(long *)(lVar3 + 0x48)) >> 4
                                    ) * -0x45d1745d);
            }
            lVar3 = *(long *)(param_1 + 0x560);
            iVar4 = iVar4 + 1;
            if ((int)((ulong)(*(long *)(lVar3 + 0x228) - *(long *)(lVar3 + 0x220)) >> 7) <= iVar4) {
              return 1;
            }
          } while( true );
        }
      }
      else {
        local_58 = 0;
        local_60 = lVar3;
        if (plVar5 < *(long **)(param_1 + 0xb68)) {
          uVar2 = *(undefined8 *)(param_1 + 0xb70);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00dcc748:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar2;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          *plVar5 = local_60;
          plVar5[1] = CONCAT44(uStack_54,local_58);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          *(long *)(param_1 + 0xb60) = *(long *)(param_1 + 0xb60) + 0x10;
        }
        else {
          FUN_00dd2250(param_1 + 0xb58,&local_60);
        }
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


