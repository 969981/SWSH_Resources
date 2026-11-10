/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004024a0; name: FUN_004024a0
 */


uint FUN_004024a0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  
  param_2 = param_2 & 0xffffffff;
  FUN_003ff570(*(undefined8 *)(param_1 + 0x60));
  switch(*(undefined4 *)(*(long *)(param_1 + 0x78) + param_2 * 0x18 + 0xc)) {
  case 0:
                    /* try { // try from 0040250c to 004025bb has its CatchHandler @ 004025f4 */
    (**(code **)**(undefined8 **)(param_1 + 0x10))
              (*(undefined8 **)(param_1 + 0x10),
               *(undefined8 *)(*(long *)(param_1 + 0x78) + param_2 * 0x18));
    break;
  case 1:
    (**(code **)(**(long **)(param_1 + 8) + 0x10))
              (*(long **)(param_1 + 8),2,"No GPU dispatcher",
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/task/src/TaskManager.cpp"
               ,0x2a8);
    break;
  case 2:
    uVar1 = FUN_00402b30(param_1,param_2,param_3 & 1);
    goto LAB_004025bc;
  case 3:
    (**(code **)(**(long **)(param_1 + 8) + 0x10))
              (*(long **)(param_1 + 8),2,"PxTask dispatched twice",
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/task/src/TaskManager.cpp"
               ,0x290);
    param_3 = 0;
    goto LAB_004025d4;
  default:
    (**(code **)(**(long **)(param_1 + 8) + 0x10))
              (*(long **)(param_1 + 8),2,"Unknown task type",
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/task/src/TaskManager.cpp"
               ,0x2b4);
    uVar1 = FUN_00402b30(param_1,param_2,param_3 & 1);
LAB_004025bc:
    param_3 = uVar1 | param_3;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x78) + param_2 * 0x18 + 0xc) = 3;
LAB_004025d4:
                    /* try { // try from 004025d8 to 004025db has its CatchHandler @ 004025f0 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x60));
  return param_3 & 1;
}


