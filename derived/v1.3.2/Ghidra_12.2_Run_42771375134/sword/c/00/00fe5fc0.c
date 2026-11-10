/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe5fc0; name: FUN_00fe5fc0
 */


long * FUN_00fe5fc0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x688,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff5da0(plVar4,*param_3);
  puVar2 = PTR_DAT_02723230;
  plVar4[0xc] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[9] = (long)(puVar2 + 0x58);
  plVar4[10] = (long)(puVar2 + 0x98);
  lVar5 = 0;
  do {
    lVar1 = lVar5 + 0x5c;
    *(undefined4 *)((long)plVar4 + lVar5 + 0x78) = 0;
    *(undefined2 *)((long)plVar4 + lVar5 + 0x7c) = 0;
    *(undefined8 *)((long)plVar4 + lVar5 + 0x6e) = 0;
    *(undefined8 *)((long)plVar4 + lVar5 + 0x68) = 0;
    *(undefined2 *)((long)plVar4 + lVar5 + 0x90) = 0;
    *(undefined4 *)((long)plVar4 + lVar5 + 0x94) = 0;
    *(undefined2 *)((long)plVar4 + lVar5 + 0x98) = 0;
    *(undefined8 *)((long)plVar4 + lVar5 + 0x9c) = 0;
    *(undefined8 *)((long)plVar4 + lVar5 + 0xa4) = 0xffffffff;
    *(undefined2 *)((long)plVar4 + lVar5 + 0xac) = 0;
    *(undefined4 *)((long)plVar4 + lVar5 + 0xb0) = 0;
    *(undefined2 *)((long)plVar4 + lVar5 + 0xb4) = 0;
    *(undefined8 *)((long)plVar4 + lVar5 + 0xb8) = 0;
    *(undefined4 *)((long)plVar4 + lVar5 + 0xc0) = 0xffffffff;
    *(undefined8 *)((long)plVar4 + lVar5 + 0x80) = 0;
    *(undefined8 *)((long)plVar4 + lVar5 + 0x88) = 0xffffffff;
    lVar5 = lVar1;
  } while (lVar1 != 0x61c);
  *(undefined1 *)((long)plVar4 + 0x684) = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x688;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


