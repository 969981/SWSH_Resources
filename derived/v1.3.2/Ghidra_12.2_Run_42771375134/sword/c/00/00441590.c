/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441590; name: FUN_00441590
 */


long * FUN_00441590(undefined4 param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x120);
  if (plVar2 != (long *)0x0) {
    FUN_0043f140(plVar2,param_1,param_2);
    puVar1 = PTR_DAT_02712fb0 + 0x10;
    plVar2[8] = 0;
    plVar2[9] = 0;
    *plVar2 = (long)puVar1;
    lVar3 = *param_3;
    plVar2[0xc] = lVar3;
    if (lVar3 != 0) {
      FUN_0045b670();
    }
    plVar2[0x21] = 0;
    *(undefined2 *)((long)plVar2 + 0xc4) = 1;
    *(undefined4 *)(plVar2 + 0x1a) = 1;
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0x400000000;
    *(undefined8 *)((long)plVar2 + 0xbc) = 0;
    *(undefined8 *)((long)plVar2 + 0xb4) = 0;
    *(undefined8 *)((long)plVar2 + 0xac) = 0;
    *(undefined4 *)(plVar2 + 0x19) = 0;
    *(byte *)((long)plVar2 + 0xcc) = *(byte *)((long)plVar2 + 0xcc) & 0xfe;
    *(undefined4 *)(plVar2 + 0x1d) = 0;
    *(undefined1 *)(plVar2 + 0x20) = 0;
    *(undefined2 *)((long)plVar2 + 0x104) = 0xff00;
    *(undefined4 *)(plVar2 + 0xd) = 0;
    plVar2[10] = 0;
    *(undefined4 *)(plVar2 + 0xb) = 0;
    plVar2[0x1b] = 0;
    plVar2[0x1c] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    FUN_0043db70(plVar2);
  }
  return plVar2;
}


