/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcf6e0; name: FUN_00dcf6e0
 */


void FUN_00dcf6e0(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_38;
  
  if (*(int *)(param_1 + 0xa98) != -1) {
    uVar3 = *(undefined8 *)PTR_DAT_0271e8d0;
    bVar1 = *(byte *)(param_1 + 0x1b0);
    uVar4 = 0xcbf29ce484222645;
    local_38 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      local_38 = 0xcbf29ce484222645;
      pbVar2 = (byte *)(param_1 + 0x1b1);
      do {
        local_38 = (local_38 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
    }
    FUN_00dcf820(uVar3,&local_38);
    bVar1 = *(byte *)(param_1 + 0x3d0);
    local_38 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      local_38 = 0xcbf29ce484222645;
      pbVar2 = (byte *)(param_1 + 0x3d1);
      do {
        local_38 = (local_38 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
    }
    FUN_00dcf820(uVar3,&local_38,*(undefined4 *)(param_1 + 0xa98));
    bVar1 = *(byte *)(param_1 + 0x830);
    local_38 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      local_38 = 0xcbf29ce484222645;
      pbVar2 = (byte *)(param_1 + 0x831);
      do {
        local_38 = (local_38 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
    }
    FUN_00dcf820(uVar3,&local_38,*(undefined4 *)(param_1 + 0xa98));
    bVar1 = *(byte *)(param_1 + 0x610);
    if (bVar1 != 0) {
      pbVar2 = (byte *)(param_1 + 0x611);
      do {
        uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
    }
    local_38 = uVar4;
    FUN_00dcf820(uVar3,&local_38,*(undefined4 *)(param_1 + 0xa98));
  }
  return;
}


