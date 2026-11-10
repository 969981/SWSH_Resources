/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a71e0; name: FUN_003a71e0
 */


undefined8 FUN_003a71e0(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  if (*(int *)(param_1 + 0x1edc) != 0) {
    uVar2 = *param_3;
    uVar7 = (uVar2 & 0xffffffff | param_3[1] << 0x20) + (uVar2 << 0x20 ^ 0xffffffffffffffff);
    uVar7 = uVar7 ^ uVar7 >> 0x16;
    uVar7 = uVar7 + (uVar7 << 0xd ^ 0xffffffffffffffff);
    uVar7 = (uVar7 ^ uVar7 >> 8) * 9;
    uVar7 = uVar7 ^ uVar7 >> 0xf;
    uVar7 = uVar7 + (uVar7 << 0x1b ^ 0xffffffffffffffff);
    uVar6 = *(uint *)(*(long *)(param_1 + 0x1ec0) +
                     (ulong)(*(int *)(param_1 + 0x1ecc) - 1U & ((uint)(uVar7 >> 0x1f) ^ (uint)uVar7)
                            ) * 4);
    if (uVar6 != 0xffffffff) {
      lVar5 = *(long *)(param_1 + 0x1eb0);
      do {
        uVar7 = (ulong)uVar6;
        if ((*(ulong *)(lVar5 + uVar7 * 0x20) == uVar2) &&
           (lVar1 = lVar5 + uVar7 * 0x20, *(ulong *)(lVar1 + 8) == param_3[1])) {
          if (lVar5 + uVar7 * 0x20 != 0) {
            FUN_003982f0(*(undefined8 *)
                          (*(long *)(param_1 + 0x1f10) + (ulong)*(uint *)(lVar1 + 0x18) * 0x10),
                         *(undefined4 *)(lVar1 + 0x14));
            if (*(uint *)(lVar1 + 0x18) < *(uint *)(param_1 + 0x1ef0)) {
              uVar4 = *(undefined4 *)
                       (*(long *)(param_1 + 0x1ee8) + (ulong)*(uint *)(lVar1 + 0x18) * 4);
            }
            else {
              uVar4 = 0xffffffff;
            }
            FUN_003982f0(*(undefined8 *)(param_1 + 0x1ee0),uVar4);
            *(undefined1 *)(param_1 + 0x1f20) = 1;
            return 1;
          }
          break;
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 0x1eb8) + uVar7 * 4);
      } while (uVar6 != 0xffffffff);
    }
  }
  uVar3 = FUN_003a0310(param_1 + 0x10);
  return uVar3;
}


