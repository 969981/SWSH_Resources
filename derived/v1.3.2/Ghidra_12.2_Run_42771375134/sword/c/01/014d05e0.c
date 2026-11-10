/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d05e0; name: FUN_014d05e0
 */


void FUN_014d05e0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2d58,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff5da0(plVar4,*param_3);
  puVar2 = PTR_DAT_0272a3c8;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0x100000000;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[9] = (long)(puVar2 + 0x58);
  plVar4[10] = (long)(puVar2 + 0x98);
  lVar3 = 0x78;
  *(undefined4 *)(plVar4 + 0xe) = 0;
  do {
    puVar1 = (undefined4 *)((long)plVar4 + lVar3);
    lVar3 = lVar3 + 0x30;
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[4] = 1;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined1 *)((long)puVar1 + 0x16) = 0;
    puVar1[6] = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[10] = 1;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)((long)puVar1 + 0x2e) = 0;
  } while ((long *)(puVar1 + 0xc) != plVar4 + 0x13b);
                    /* WARNING: Subroutine does not return */
  memset(plVar4 + 0x13b,0,0x2308);
}


