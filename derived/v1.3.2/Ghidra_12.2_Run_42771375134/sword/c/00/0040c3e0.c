/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040c3e0; name: FUN_0040c3e0
 */


void FUN_0040c3e0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_180 [264];
  long local_78 [3];
  long local_60;
  char local_58;
  
  FUN_00418860(auStack_180,*(undefined8 *)(param_1 + 0x10),0);
  if (local_78[0] != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x20);
    do {
      FUN_00418e90(*(undefined4 *)(param_1 + 0x4c),auStack_180,param_2,param_3,uVar1 & 0x7f00,
                   *(undefined4 *)(param_1 + 0x2c));
      if (local_58 != '\0') break;
      lVar3 = FUN_00419150(auStack_180,0);
      lVar3 = FUN_00419200(local_78,param_2 - lVar3);
      uVar2 = local_60 - lVar3;
      if (uVar2 == 0 || local_60 < lVar3) {
        uVar2 = 0;
      }
      if (param_3 <= uVar2) break;
      (**(code **)(**(long **)(param_1 + 0x10) + 0x98))(*(long **)(param_1 + 0x10),auStack_180,0);
    } while (local_78[0] != 0);
  }
  FUN_004188d0(auStack_180);
  return;
}


