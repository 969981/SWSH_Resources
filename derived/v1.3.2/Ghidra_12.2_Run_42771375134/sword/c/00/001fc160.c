/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fc160; name: FUN_001fc160
 */


undefined8 FUN_001fc160(long param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x1efc) != 3) {
    uVar3 = FUN_00400880();
    FUN_00400890(uVar3,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                 ,0x905,
                 "PxScene::fetchResults: fetchResults() called illegally! It must be called after advance() or simulate()"
                );
    return 0;
  }
  uVar2 = FUN_003ffbe0(*(undefined8 *)(param_1 + 0x2738),-(param_2 & 1));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar1 = param_1 + 0x20;
  FUN_003e7310(lVar1);
  FUN_001d0df0(param_1 + 0x10);
  FUN_003de8e0(lVar1);
  FUN_001fbb60(param_1);
  FUN_003e6a00(lVar1);
  FUN_003deec0(lVar1);
  FUN_003ded10(lVar1,0);
  FUN_001fbd40(param_1);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 1;
}


