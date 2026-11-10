/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011721a0; name: FUN_011721a0
 */


uint FUN_011721a0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    uVar1 = 0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x80);
    puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_01177a20(puVar2);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    uVar1 = FUN_01174270(*(undefined8 *)(param_1 + 0xc0),puVar2);
    FUN_0075efb0(auStack_38,plVar4,0,1);
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x18,8);
    FUN_0075f0a0(auStack_38);
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


