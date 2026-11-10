/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f41b0; name: FUN_002f41b0
 */


undefined8 FUN_002f41b0(long param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  if (*(long *)(param_1 + 0x30) != param_3) {
    return 0;
  }
  puVar2 = (undefined8 *)FUN_003ffa00(*(undefined8 *)(param_1 + 0x18));
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (long *)FUN_00400d30();
    pcVar7 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>::getName() [T = physx::Ext::SharedQueueEntry]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar6 = (*pcVar7)(plVar3,0x37,pcVar1,"./../../PhysXExtensions/src/ExtSharedQueueEntryPool.h",
                      0x7f);
    if (lVar6 == 0) {
      return 0;
    }
    puVar2 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff0);
    puVar2[-1] = (long)puVar2 - lVar6;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = param_2;
      *(undefined1 *)(puVar2 + 2) = 0;
      goto LAB_002f4284;
    }
  }
  else {
    puVar2[1] = param_2;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
LAB_002f4284:
  FUN_003ff9a0(*(undefined8 *)(param_1 + 0x28),puVar2);
  return 1;
}


