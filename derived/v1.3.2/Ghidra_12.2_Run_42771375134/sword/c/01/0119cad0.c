/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119cad0; name: FUN_0119cad0
 */


uint FUN_0119cad0(long param_1,byte param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  byte local_48;
  
  local_50 = param_3;
  local_48 = param_2;
  FUN_0119cc40(param_1 + 0x278,&local_50);
  plVar4 = *(long **)(param_1 + 0x80);
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_011b4f70(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  local_60 = puVar2;
  FUN_0075efb0(auStack_58,plVar4,0,1);
  *(uint *)(local_60 + 4) = (uint)param_2;
  FUN_0075f0a0(auStack_58);
  local_60 = puVar2;
  FUN_0075efb0(auStack_58,plVar4,0,1);
  local_60[3] = param_3;
  FUN_0075f0a0(auStack_58);
  uVar1 = FUN_0119cf10(*(undefined8 *)(param_1 + 0x88),puVar2);
  FUN_0075efb0(&local_60,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x28,8);
  FUN_0075f0a0(&local_60);
  return uVar1 & 1;
}


