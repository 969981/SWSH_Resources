/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a23f0; name: FUN_014a23f0
 */


void FUN_014a23f0(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong *puVar7;
  ulong uVar8;
  
  uVar4 = FUN_01485a70(*(undefined8 *)(param_1 + 0x60));
  uVar5 = FUN_0087d610(uVar4,2);
  if (((uVar5 & 1) == 0) && (*(char *)(*(long *)(param_1 + 0x68) + 500) == '\0')) {
    uVar5 = FUN_017163b0(*(long *)(param_1 + 0x68),0);
    uVar2 = FUN_017163b0(*(undefined8 *)(param_1 + 0x68),1);
    if (((uVar5 & 1) != 0) && ((uVar2 & 1) != 0)) {
      puVar7 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar5 = *puVar7;
      uVar8 = puVar7[1] ^ uVar5;
      uVar2 = (int)puVar7[1] + (int)uVar5;
      *puVar7 = uVar8 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar8 << 0x10;
      puVar7[1] = uVar8 >> 0x1b | uVar8 << 0x25;
    }
    FUN_01715a80(*(undefined8 *)(param_1 + 0x68),uVar2 & 1,0);
    if (*(char *)(*(long *)(param_1 + 0x60) + 0x38) == '\0') {
      FUN_014b35b0();
      uVar5 = FUN_008797f0(uVar4);
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar5 = FUN_00879860(uVar4);
        uVar6 = 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = 2;
        }
      }
      uVar3 = FUN_008783b0(uVar4);
      uVar1 = FUN_008783c0(uVar4);
      FUN_014b37e0(uVar3,uVar1,0,uVar6);
      return;
    }
  }
  return;
}


