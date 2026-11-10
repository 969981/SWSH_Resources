/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067bc10; name: FUN_0067bc10
 */


undefined8 FUN_0067bc10(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x180)) {
    lVar2 = 0;
    lVar3 = 0xe;
    do {
      puVar1 = (undefined1 *)(*(long *)(param_1 + 0x198) + lVar3);
      (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(puVar1 + -0xe),1);
      (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined2 *)(puVar1 + -10),1);
      (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined2 *)(puVar1 + -8),1);
      (**(code **)(*param_2 + 0x1a0))(param_2,puVar1[-6],1);
      (**(code **)(*param_2 + 0x1a0))(param_2,puVar1[-5],1);
      (**(code **)(*param_2 + 0x1a0))(param_2,puVar1[-4],1);
      (**(code **)(*param_2 + 0x1a0))(param_2,puVar1[-3],1);
      (**(code **)(*param_2 + 0x1a0))(param_2,puVar1[-2],1);
      (**(code **)(*param_2 + 0x1a0))(param_2,puVar1[-1],1);
      (**(code **)(*param_2 + 0x1a0))(param_2,*puVar1,1);
      (**(code **)(*param_2 + 0x1a0))(param_2,puVar1[1],1);
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(puVar1 + 2),1);
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(puVar1 + 6),1);
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(puVar1 + 10),1);
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(puVar1 + 0xe),1);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar2 < *(int *)(param_1 + 0x180));
  }
  return 1;
}


