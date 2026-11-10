/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fd020; name: FUN_001fd020
 */


void FUN_001fd020(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00400090(*(undefined4 *)(param_1 + 0x28bc));
  if ((uVar2 & 0xff000000) == 0) {
    uVar3 = FUN_00400880();
    FUN_00400890(uVar3,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                 ,0xbfa,
                 "PxScene::unlockWrite() called without matching call to PxScene::lockWrite(), behaviour will be undefined."
                );
    return;
  }
  uVar1 = (int)(uVar2 >> 0x18) - 1;
  FUN_004000a0(*(undefined4 *)(param_1 + 0x28bc),uVar2 & 0xffffff | ((ulong)uVar1 & 0xff) << 0x18);
  if ((uVar1 & 0xff) == 0) {
    *(undefined8 *)(param_1 + 0x28c0) = 0;
    FUN_003ff880(param_1 + 0x28c8);
    return;
  }
  return;
}


