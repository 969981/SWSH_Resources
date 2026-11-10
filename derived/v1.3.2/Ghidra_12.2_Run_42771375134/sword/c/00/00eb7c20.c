/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb7c20; name: FUN_00eb7c20
 */


void FUN_00eb7c20(long param_1,long param_2)

{
  undefined8 uVar1;
  byte bVar2;
  uint *puVar3;
  ulong uVar4;
  
  FUN_00e73ab0();
  bVar2 = *(byte *)(param_2 + 0x18);
  *(uint *)(param_1 + 0x27c) = (uint)bVar2;
  if (0 < *(int *)(param_1 + 0x278)) {
    uVar4 = 0;
    puVar3 = (uint *)(param_1 + 0xe8);
    do {
      if (0x18 < uVar4) {
LAB_00eb7cc0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*puVar3 == (uint)bVar2) {
        if (-1 < (int)uVar4) {
          if (0x18 < uVar4) goto LAB_00eb7cc0;
          uVar1 = *(undefined8 *)puVar3;
          *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(puVar3 + 2);
          *(undefined8 *)(param_1 + 0x280) = uVar1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 4;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x278));
  }
  *(uint *)(param_1 + 0x2b0) = (uint)*(byte *)(param_2 + 0x19);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0x14);
  *(uint *)(param_1 + 0x2b8) = (uint)*(byte *)(param_2 + 0x1a);
  return;
}


