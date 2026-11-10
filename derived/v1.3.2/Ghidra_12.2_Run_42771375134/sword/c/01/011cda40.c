/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011cda40; name: FUN_011cda40
 */


void FUN_011cda40(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *local_50;
  undefined1 auStack_48 [8];
  
  if (*(int *)(param_1 + 0x48) == 0 || *(int *)(param_1 + 0x48) == param_2) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      *(int *)(param_1 + 0x48) = param_2;
    }
    else {
      plVar5 = *(long **)(param_1 + 0x10);
      puVar2 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x20,8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_011d3050(puVar2);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      local_50 = puVar2;
      FUN_0075efb0(auStack_48,plVar5,0,1);
      *(int *)((long)local_50 + 0x14) = param_2;
      FUN_0075f0a0(auStack_48);
      uVar4 = FUN_011cdef0(*(undefined8 *)(param_1 + 0x18),puVar2);
      iVar1 = 0;
      if ((uVar4 & 1) == 0) {
        iVar1 = param_2;
      }
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_0075efb0(&local_50,plVar5,0,1);
      (**(code **)*puVar2)(puVar2);
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar2,0x20,8);
      FUN_0075f0a0(&local_50);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4d) = 1;
  }
  return;
}


