/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c09c0; name: FUN_005c09c0
 */


void FUN_005c09c0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_2 + 0x40);
  FUN_005c0a50(param_1 + 0xf70,&local_28,param_2);
  plVar1 = (long *)(param_1 + 0xfc0);
  if (((*(byte *)(param_1 + 0xfe0) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 4000);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0xfb0) = 0;
  *(undefined8 *)(param_1 + 0xfa8) = 0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xfc8) = 0;
  *(undefined8 *)(param_1 + 0xfd0) = 0;
  return;
}


