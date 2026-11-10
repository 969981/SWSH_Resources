/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041cc60; name: FUN_0041cc60
 */


long * FUN_0041cc60(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xb0);
  if (plVar3 != (long *)0x0) {
    FUN_00408790(plVar3,param_1);
    puVar1 = PTR_DAT_02712c18 + 0xa0;
    puVar2 = PTR_DAT_02712c18 + 200;
    *plVar3 = (long)(PTR_DAT_02712c18 + 0x10);
    plVar3[3] = (long)puVar1;
    plVar3[5] = (long)puVar2;
    FUN_0041b250(plVar3 + 0xc);
    puVar1 = PTR_DAT_02712c20;
    *(undefined4 *)(plVar3 + 0x11) = param_3;
    plVar3[0xf] = 0;
    plVar3[0x10] = param_2;
    plVar3[0xc] = (long)(puVar1 + 0x10);
    FUN_00479c00(plVar3 + 0x12);
    *(undefined4 *)(plVar3 + 0x15) = 0;
    *(byte *)((long)plVar3 + 0xac) = *(byte *)((long)plVar3 + 0xac) & 0xfc;
    if ((long *)plVar3[0x10] != (long *)0x0) {
      (**(code **)(*(long *)plVar3[0x10] + 0x10))();
    }
  }
  return plVar3;
}


