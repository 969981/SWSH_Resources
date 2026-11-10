/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007be220; name: FUN_007be220
 */


uint FUN_007be220(long param_1,byte param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *local_50;
  undefined1 auStack_48 [8];
  
  plVar4 = *(long **)(param_1 + 0x70);
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_007c1110(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  local_50 = puVar2;
  FUN_0075efb0(auStack_48,plVar4,0,1);
  *(byte *)((long)local_50 + 0x11) = param_2 & 1;
  FUN_0075f0a0(auStack_48);
  uVar1 = FUN_007be5f0(*(undefined8 *)(param_1 + 0x80),puVar2);
  FUN_0075efb0(&local_50,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x18,8);
  FUN_0075f0a0(&local_50);
  return uVar1 & 1;
}


