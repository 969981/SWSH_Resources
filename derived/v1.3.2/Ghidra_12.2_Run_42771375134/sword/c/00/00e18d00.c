/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e18d00; name: FUN_00e18d00
 */


undefined8 FUN_00e18d00(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_02710860;
  puVar6 = *(undefined8 **)(param_1 + 0x80);
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != puVar2) {
    do {
      while ((lVar4 = (**(code **)(*(long *)*puVar6 + 0x48))(), lVar4 != *param_2 ||
             ((uVar5 = (**(code **)(*(long *)*puVar6 + 0x78))(), (uVar5 & 1) == 0 &&
              (uVar5 = (**(code **)(*(long *)*puVar6 + 0x70))(), (uVar5 & 1) != 0))))) {
LAB_00e18df0:
        puVar6 = puVar6 + 4;
        if (puVar2 == puVar6) {
          return 1;
        }
      }
      uVar5 = (**(code **)(*(long *)*puVar6 + 0x88))();
      if ((uVar5 & 1) == 0) {
        (**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,*(undefined8 *)(param_1 + 0xe8));
      }
      else {
        local_58 = *puVar6;
        puVar1 = *(undefined8 **)(param_1 + 0xb8);
        if (puVar1 < *(undefined8 **)(param_1 + 0xc0)) {
          uVar7 = *(undefined8 *)(param_1 + 200);
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          *puVar1 = local_58;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 8;
          goto LAB_00e18df0;
        }
        FUN_00e1dbc0(param_1 + 0xb0,&local_58);
      }
      puVar6 = puVar6 + 4;
    } while (puVar2 != puVar6);
  }
  return 1;
}


