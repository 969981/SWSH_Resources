/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fbd40; name: FUN_001fbd40
 */


void FUN_001fbd40(long param_1)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *local_38;
  
  lVar1 = param_1 + 0x20;
  FUN_003e74f0(lVar1);
  FUN_001cf920(param_1 + 0x10);
  local_38 = PTR_DAT_027111c8 + 0x10;
                    /* try { // try from 001fbd88 to 001fbd93 has its CatchHandler @ 001fbe80 */
  FUN_003e5c70(lVar1,param_1 + 0x24a8,&local_38);
  puVar2 = (uint *)(param_1 + 0x112c);
  puVar3 = (uint *)(param_1 + 0x2408);
  iVar5 = *(int *)(param_1 + 0x2550);
  puVar4 = puVar2;
  if ((*(uint *)(param_1 + 0x2428) & 4) != 0) {
    puVar4 = puVar3;
  }
  if (((uint)(iVar5 == 0) & (*puVar4 & 0x40000) >> 0x12) != 0) {
    iVar5 = 1;
  }
                    /* try { // try from 001fbdd4 to 001fbe6b has its CatchHandler @ 001fbe84 */
  FUN_0039aa70(param_1 + 0x2430,iVar5);
  FUN_003e6f60(lVar1);
  FUN_003dcd50(lVar1);
  uVar7 = *(uint *)(param_1 + 0x2428);
  puVar4 = puVar2;
  if ((uVar7 & 4) != 0) {
    puVar4 = puVar3;
  }
  if (((byte)*puVar4 >> 1 & 1) != 0) {
    FUN_003e9440(lVar1);
    uVar7 = *(uint *)(param_1 + 0x2428);
  }
  if ((uVar7 & 4) != 0) {
    puVar2 = puVar3;
  }
  if ((*puVar2 & 1) != 0) {
    FUN_003e97d0(lVar1);
  }
  uVar6 = FUN_003de1b0(lVar1);
  FUN_001fbe90(param_1 + 0x2558,uVar6);
  if (*(char *)(param_1 + 0x28a8) != '\0') {
    (**(code **)(**(long **)(param_1 + 0x2768) + 0x30))();
  }
  *(undefined4 *)(param_1 + 0x1efc) = 0;
  FUN_003ffb50(*(undefined8 *)(param_1 + 0x2738));
  FUN_003ffb50(*(undefined8 *)(param_1 + 0x2740));
  return;
}


