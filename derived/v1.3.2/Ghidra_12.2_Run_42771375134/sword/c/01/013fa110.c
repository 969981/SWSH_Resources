/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fa110; name: FUN_013fa110
 */


long * FUN_013fa110(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2fd0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar3,*param_3,*param_4,*param_5);
  puVar1 = PTR_DAT_02729578;
  plVar3[0xba] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[9] = (long)(puVar1 + 0xa8);
  plVar3[10] = (long)(puVar1 + 0xe8);
  FUN_0168ad10(plVar3 + 0xbc);
  puVar1 = PTR_DAT_02729580 + 0x10;
  plVar3[0xbc] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x136);
  plVar3[0x136] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x1b0);
  plVar3[0x1b0] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x22a);
  plVar3[0x22a] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x2a4);
  plVar3[0x2a4] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x31e);
  plVar3[0x31e] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x398);
  plVar3[0x398] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x412);
  plVar3[0x412] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x48c);
  plVar3[0x48c] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x506);
  plVar3[0x506] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x580);
  puVar1 = PTR_DAT_02729588 + 0x10;
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[0x580] = (long)puVar1;
  plVar3[3] = 0x2fd0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


