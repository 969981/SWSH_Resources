/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00683a30; name: FUN_00683a30
 */


long * FUN_00683a30(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x38))
                             (param_2,0x198,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_VFSManager_Impl.cpp"
                              ,0x38);
  FUN_00683e30(plVar1,param_2);
  if (plVar1 != (long *)0x0) {
    uVar2 = FUN_006844c0(plVar1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      plVar3 = *(long **)(param_1 + 0x18);
      puVar4 = (undefined8 *)
               (**(code **)(*plVar3 + 0x38))
                         (plVar3,0x28,0x10,"../../../../Include\\SiCore/SiCore_LinkedList.h",0x2e5);
      *puVar4 = (undefined8 *)(param_1 + 0x18);
      puVar4[1] = 0;
      puVar4[4] = plVar1;
      puVar4[2] = 0;
      puVar4[3] = 0;
      if (puVar4 != (undefined8 *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          *(undefined8 **)(param_1 + 0x20) = puVar4;
        }
        else {
          *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x10) = puVar4;
          puVar4[1] = *(long *)(param_1 + 0x28);
        }
        *(undefined8 **)(param_1 + 0x28) = puVar4;
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      }
    }
  }
  return plVar1;
}


