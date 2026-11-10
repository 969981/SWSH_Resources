/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045fa50; name: FUN_0045fa50
 */


undefined8
FUN_0045fa50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  long *plVar1;
  long lVar2;
  
  for (lVar2 = *(long *)(param_1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x18)) {
    if ((*(short *)(lVar2 + 0x34) == 0x403) &&
       (plVar1 = (long *)FUN_0043e8c0(lVar2), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x80))(plVar1,param_2,param_3,param_4,1,param_5,param_6,param_7);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return 1;
}


