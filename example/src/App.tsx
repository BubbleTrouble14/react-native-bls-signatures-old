import * as React from 'react';

import { StyleSheet, View, Text } from 'react-native';
import { multiply, add } from 'react-native-bls-signatures';

export default function App() {
  const [result, setResult] = React.useState<number | undefined>();

  React.useEffect(() => {
    // add(1).then(setResult);
    multiply(1.3, 4.746)
      .then((val) => {
        setResult(val);
      })
      .catch((err) => console.log(err));
    // add(5)
    //   .then((val) => {
    //     setResult(val);
    //   })
    //   .catch((err) => console.log(err));
  }, []);

  return (
    <View style={styles.container}>
      <Text>Result: {result}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
});
