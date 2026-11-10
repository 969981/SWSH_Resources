/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004575d0; name: FUN_004575d0
 */


void FUN_004575d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *local_50;
  undefined1 local_48;
  
  puVar2 = PTR_DAT_02713040;
  if (*PTR_DAT_02713040 != '\0') {
    *PTR_DAT_02713040 = 0;
    nn::os::LockMutex((MutexType *)PTR_DAT_02713030);
    puVar1 = PTR_DAT_02713038;
    if (*(int *)(PTR_DAT_02713038 + 8) != 0) {
      uVar6 = 0;
      do {
        local_50 = *(long **)(*(long *)puVar1 + uVar6 * 8);
        local_48 = 1;
        uVar7 = 0x3f800000;
        if (local_50[10] != 0) {
          pbVar4 = *(byte **)(local_50[10] + 0x18);
          uVar7 = 0x3f800000;
          if (pbVar4 != (byte *)0x0) {
            uVar3 = 0;
            pbVar5 = pbVar4 + ((ulong)(*pbVar4 + 4) & 0x1fc);
            do {
              if (pbVar4[uVar3 + 1] == 0xb) {
                uVar7 = 0x3f800000;
                if (pbVar5 != (byte *)0x0) {
                  uVar7 = *(undefined4 *)pbVar5;
                }
                goto LAB_00457694;
              }
              uVar3 = uVar3 + 1;
              pbVar5 = pbVar5 + 0x10;
            } while (uVar3 < *pbVar4);
            uVar7 = 0x3f800000;
          }
        }
LAB_00457694:
        (**(code **)(*local_50 + 200))(uVar7,local_50,&local_50,1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(puVar1 + 8));
    }
    if (*(code **)(PTR_DAT_02712b90 + 0x48) != (code *)0x0) {
      (**(code **)(PTR_DAT_02712b90 + 0x48))(*puVar2,*(undefined8 *)(PTR_DAT_02712b90 + 0x50));
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02713030);
  }
  return;
}


