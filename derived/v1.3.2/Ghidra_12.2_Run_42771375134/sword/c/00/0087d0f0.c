/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d0f0; name: FUN_0087d0f0
 */


undefined8 FUN_0087d0f0(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar1 = FUN_0086d200(*(undefined8 *)(param_1 + 0x98));
  if (uVar1 == *(byte *)(param_2 + 1)) {
    iVar2 = FUN_00868f40(*(undefined8 *)(param_1 + 0x98));
    if ((iVar2 == *param_2) &&
       (uVar5 = FUN_0086e3d0(*(undefined8 *)(param_1 + 0x98),(long)param_2 + 6), (uVar5 & 1) != 0))
    {
      FUN_00874080(*(undefined8 *)(param_1 + 0x98),0);
      return 1;
    }
  }
  FUN_00874080(*(undefined8 *)(param_1 + 0x98),1);
  FUN_00874eb0(*(undefined8 *)(param_1 + 0x98),(long)param_2 + 6);
  FUN_00875000(*(undefined8 *)(param_1 + 0x98),(char)param_2[1]);
  FUN_00875150(*(undefined8 *)(param_1 + 0x98),*(undefined1 *)((long)param_2 + 5));
  FUN_00874970(*(undefined8 *)(param_1 + 0x98),0);
  FUN_00874ac0(*(undefined8 *)(param_1 + 0x98),0);
  FUN_00874c10(*(undefined8 *)(param_1 + 0x98),0);
  FUN_00874d60(*(undefined8 *)(param_1 + 0x98),0);
  uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_008649f0(uVar3,uVar4);
  uVar3 = FUN_00864a10(0x16);
  FUN_00874320(*(undefined8 *)(param_1 + 0x98),uVar3);
  return 0;
}


