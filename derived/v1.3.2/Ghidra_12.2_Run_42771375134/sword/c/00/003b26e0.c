/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b26e0; name: FUN_003b26e0
 */


void FUN_003b26e0(long *param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined4 auStack_d0 [2];
  long local_c8;
  ulong local_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  ulong local_60;
  undefined4 *local_50;
  char local_48;
  undefined4 local_34;
  
  if (param_1[2] != 0) {
    if ((*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) != 0 || (int)param_1[3] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,param_1[2],*(uint *)((long)param_1 + 0x1c) << 2);
    }
  }
  if ((long *)*param_1 != (long *)0x0) {
    local_48 = '\0';
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    plVar4 = *(long **)(*(long *)PTR_DAT_02711060 + 0x10);
    local_50 = auStack_d0;
                    /* try { // try from 003b277c to 003b279b has its CatchHandler @ 003b29cc */
    auStack_d0[0] = (**(code **)(*(long *)*param_1 + 0x38))();
    uVar1 = (**(code **)(*(long *)*param_1 + 0x18))();
    local_34 = 0;
                    /* try { // try from 003b27a0 to 003b27ab has its CatchHandler @ 003b29bc */
    FUN_001ed3f0(&local_c8,uVar1,&local_34);
                    /* try { // try from 003b27b8 to 003b27bf has its CatchHandler @ 003b29cc */
    uVar1 = (**(code **)(*(long *)*param_1 + 0x28))();
    local_34 = 0;
                    /* try { // try from 003b27c8 to 003b27cf has its CatchHandler @ 003b29ac */
    FUN_001ed3f0(&local_b8,uVar1,&local_34);
                    /* try { // try from 003b27dc to 003b27e3 has its CatchHandler @ 003b29cc */
    uVar1 = (**(code **)(*(long *)*param_1 + 0x20))();
    local_34 = 0;
                    /* try { // try from 003b27ec to 003b27f3 has its CatchHandler @ 003b299c */
    FUN_003b29f0(&local_a8,uVar1,&local_34);
                    /* try { // try from 003b2800 to 003b2807 has its CatchHandler @ 003b29cc */
    uVar1 = (**(code **)(*(long *)*param_1 + 0x30))();
    local_34 = 0;
                    /* try { // try from 003b2810 to 003b2817 has its CatchHandler @ 003b298c */
    FUN_001ed3f0(&local_98,uVar1,&local_34);
                    /* try { // try from 003b2824 to 003b2887 has its CatchHandler @ 003b29cc */
    uVar2 = (**(code **)(*(long *)*param_1 + 0x40))();
    if ((local_80._4_4_ & 0x7fffffff) < uVar2) {
      FUN_001ed4d0(&local_88,uVar2);
    }
    uVar2 = (**(code **)(*(long *)*param_1 + 0x40))();
    if ((local_70._4_4_ & 0x7fffffff) < uVar2) {
      FUN_003b3bc0(&local_78,uVar2);
    }
    iVar3 = (**(code **)(*(long *)*param_1 + 0x48))();
    local_34 = 0;
                    /* try { // try from 003b2894 to 003b289f has its CatchHandler @ 003b297c */
    FUN_001ed3f0(&local_68,iVar3 * 3,&local_34);
                    /* try { // try from 003b2900 to 003b2943 has its CatchHandler @ 003b29cc */
    (**(code **)(*plVar4 + 0x30))
              (plVar4,*param_1,local_c8,local_c8 + (local_c0 & 0xffffffff) * 4,local_b8,
               local_b8 + (local_b0 & 0xffffffff) * 4,local_a8,
               local_a8 + (local_a0 & 0xffffffff) * 4,local_98,
               local_98 + (local_90 & 0xffffffff) * 4,local_88,
               local_88 + (local_80 & 0xffffffff) * 4,local_78,
               local_78 + (local_70 & 0xffffffff) * 4,local_68,
               local_68 + (local_60 & 0xffffffff) * 4);
    (**(code **)(*param_2 + 0x10))(param_2,auStack_d0,0x78);
    FUN_003b2460(auStack_d0,param_2);
    FUN_003b2ad0(auStack_d0);
    if (local_48 != '\0') {
                    /* try { // try from 003b2958 to 003b295f has its CatchHandler @ 003b2978 */
      FUN_00401ce0(&local_50,local_50);
    }
  }
  return;
}


