/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01002a30; name: FUN_01002a30
 */


undefined8 FUN_01002a30(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd88) != 0) {
    if (*(int *)(param_1 + 0xd88) == 1) {
      lVar1 = *(long *)(param_1 + 0xd70);
      if (lVar1 != 0) {
        if (*(int *)(param_1 + 0xd7c) == 2) {
          uVar2 = FUN_008f3810(lVar1,param_1 + 0xd80);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          *(undefined4 *)(param_1 + 0xd88) = 2;
          return 0;
        }
        if (*(int *)(param_1 + 0xd7c) != 1) {
          return 0;
        }
        uVar2 = FUN_008f2f30(lVar1,param_1 + 0xd80);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        *(undefined8 *)(param_1 + 0xd7c) = 2;
        return 0;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0xd84);
      if (iVar3 != 2) {
        if (iVar3 != 1) {
          if (iVar3 != 0) {
            return 0;
          }
          lVar1 = *(long *)(param_1 + 0xd70);
          *(undefined8 *)(param_1 + 0xd70) = 0;
          if (lVar1 == 0) {
            iVar3 = 1;
          }
          else {
            (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
            iVar3 = *(int *)(param_1 + 0xd84) + 1;
          }
          *(int *)(param_1 + 0xd84) = iVar3;
        }
        uVar2 = FUN_009e4300(*(undefined8 *)(param_1 + 0xd50));
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        lVar1 = *(long *)(param_1 + 0xd50);
        *(undefined8 *)(param_1 + 0xd50) = 0;
        if (lVar1 != 0) {
          FUN_009e3c50(lVar1);
          (**(code **)(**(long **)(param_1 + 0xd58) + 0x18))
                    (*(long **)(param_1 + 0xd58),lVar1,*(undefined8 *)(param_1 + 0xd60),
                     *(undefined8 *)(param_1 + 0xd68));
        }
        lVar1 = *(long *)(param_1 + 0xd90);
        *(undefined8 *)(param_1 + 0xd90) = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
        *(undefined1 *)(param_1 + 0xd78) = 0;
        *(int *)(param_1 + 0xd84) = *(int *)(param_1 + 0xd84) + 1;
        return 0;
      }
    }
  }
  return 1;
}


