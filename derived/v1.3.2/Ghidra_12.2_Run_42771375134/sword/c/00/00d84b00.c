/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d84b00; name: FUN_00d84b00
 */


void FUN_00d84b00(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long local_38;
  
  puVar3 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar1 = *puVar3;
  uVar4 = puVar3[1];
  uVar5 = uVar4 ^ uVar1;
  puVar3[1] = uVar5 >> 0x1b | uVar5 << 0x25;
  uVar4 = (ulong)(uint)((int)uVar4 + (int)uVar1);
  *puVar3 = uVar5 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar5 << 0x10;
  *(ulong *)(param_1 + 0x138) = uVar4;
  *(undefined8 *)(param_1 + 0x140) = 0x82a2b175229d6a5b;
  *(ulong *)(param_1 + 0x150) = uVar4;
  *(undefined8 *)(param_1 + 0x158) = 0x82a2b175229d6a5b;
  FUN_00d852e0(&local_38,param_1,1);
  lVar2 = local_38;
  FUN_00c6a2f0(local_38,param_1 + 0x130);
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_38 = 0;
  }
  FUN_00d852e0(&local_38,param_1,2);
  lVar2 = local_38;
  FUN_00c6a2f0(local_38,param_1 + 0x148);
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return;
}


